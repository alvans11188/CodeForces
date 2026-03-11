#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		if(k>=2){
			cout<<"YES"<<endl;
		}else{
			bool cen=0;
			for(int i=0;i<n-1;i++){
				if(a[i]>a[i+1]){
					cen=1;
				}
			}
			if(cen==1){
				cout<<"NO"<<endl;
			}else cout<<"YES"<<endl;
				
			
		}
	}
	return 0;
}