#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while (t--)
	{
		int n,b;cin>>n;
		vector <int> a(n);
		for(int i=0;i<n;i++){
			cin>>b;
			a[i]=b;
		}
		sort(a.begin(),a.end());
		int r=a[n-1]-a[0];
		cout<<r<<endl;
	}
	return 0;
}