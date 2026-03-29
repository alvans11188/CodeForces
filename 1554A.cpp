#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		vector <long long> a(n);
		for(int i=0;i<n;i++){
			int b;cin>>b;
			a[i]=b;	
		}
		//sort(a.begin(),a.end());
		long long mayor=a[0]*a[1];
		for(int i=1;i<n-1;i++){
			long long mayor1=a[i]*a[i+1];
			if(mayor1>mayor){
				mayor=mayor1;
			}
		}
		cout<<mayor<<endl;
		
	}
	return 0;
}