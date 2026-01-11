#include <bits/stdc++.h>

using namespace std;

#define forn(i,n) for(int i=0;i<n;i++)

int main()
{
	int a;cin>>a;
	while(a--){
		int n,k,x;cin>>n>>k>>x;
		if(x!=1){
			cout<<"YES"<<endl;
			int b=0;
			b=n;
			cout<<b<<endl;
			forn(i,b){
				cout<<"1 ";
			}
			cout<<endl;
		}else if(k>=2&&n%2==0){
			cout<<"YES"<<endl;
			int b=0;
			while(b!=n){
				b+=2;
				
			}
			cout<<b/2<<endl;
			for(int i=0;i<b;i++){
				i++;
				cout<<"2 ";
			}
			
			cout<<endl;
		}else if(k>=3&&n!=0){
			int b=0;
			b=(n-3)/2 + 1;
			cout<<b<<endl;
			cout<<"3 ";
			forn(i,b){
				cout<<"2 ";
			}
			cout<<endl;
		}else{
			cout<<"NO"<<endl;
		}
		
	}
	return 0;
}