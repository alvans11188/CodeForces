#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;cin>>n;
	if(n==1){
		int c;cin>>c;
		if(c==15) cout<<"DOWN";
		else if(c==0) cout<<"UP";
		else cout << -1;
	} else {
		vector<int> a(n);
		for (int i=0;i<n;i++)
			cin>>a[i];
		if(a[n-2]==14&&a[n-1]==15) cout<<"DOWN";
		else if(a[n-2]==1&&a[n-1]==0) cout <<"UP";
		else if(a[n-1]>a[n-2]) cout <<"UP";
		else if(a[n-1]<a[n-2]) cout <<"DOWN";
		
	}
	return 0;
}