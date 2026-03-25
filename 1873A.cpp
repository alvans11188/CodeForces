#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		
		int n,m;cin>>n;
		vector <int> a(n);
		for(int i=0;i<n;i++){
			cin>>m;
			a[i]=m;
			
		}
		sort(a.begin(),a.end());
		
		int r=a[0]+1;
		
		for(int i=1;i<n;i++){
			r=r*a[i];
		}
		cout<<r<<endl;
		
	}
	return 0;
}

