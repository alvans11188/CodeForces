#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	int n;cin>>n;
	int t;
	string resultado;
	int a[n];
	if(n==1){
		cin>>t;
		if(t==15){
			cout<<"DOWN";
		}else if(t==0){
			cout<<"UP";
		}else{
			cout<<"-1";
		}
		
	}else{
		cin>>a[1];
		
		for(int i=2;i<=n;i++){
			cin>>a[i];
			if(a[i]==0){
				resultado="UP";
			}else if(a[i]==15){
				resultado="DOWN";
			}else if(a[i-1]<a[i]){
				resultado="UP";
			}else if(a[i-1]>a[i]){
				resultado="DOWN";
			}
			
			
		}
	}
	cout<<resultado;
	return 0;
}