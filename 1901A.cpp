#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--){
		int n,x;cin>>n>>x;
		
		int a[n];
		for(int j=0;j<n;j++){
			cin>>a[j];
		}
		if(n==1){
			int mayor1=a[0];
			int mayor3=2*(x-a[n-1]);
			cout<<max(mayor1,mayor3)<<endl;
		}else{
			int mayor1=a[0],mayor2=0,mayor3=2*(x-a[n-1]);
			
			for(int j=0;j<n-1;j++){
				if(a[j+1]-a[j]>mayor2){
					mayor2=a[j+1]-a[j];
				}
			}
			int menor = max({mayor1,mayor2,mayor3});
			cout<<menor<<endl;
		}	
	}
	return 0;
}