#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int> a(n);
		long long mayor=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			mayor=mayor+a[i];
		}
		if(n==1){
			cout<<"NO"<<endl;
			continue;
		}
		//int ta=n;
		long long menor=0;
		for(int i=0;i<n;i++){
			if(a[i]==1){
				menor=menor+2;
			}else{
				menor=menor+1;
			}
		}
		if(mayor>=menor){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
		
		
	}
	return 0;
}