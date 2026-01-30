#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	int a,n,m=1;cin>>n>>a;
	
	if(n==a){
		cout<<"YES";
	}else{
		m+=a;
		for(int i=0;i<n-1;i++){
			cin>>a;
			m+=a;
			
		}
		if(n==m){
		cout<<"YES";
		}else{
			cout<<"NO";
		}
	}
	//
	
	return 0;
}