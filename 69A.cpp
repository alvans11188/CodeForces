#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j] << " ";
		}
		cout<<endl;
	}
	int r[n][n]={0};
	int x=0;
	for(int j=0;j<n;j++){
		for(int i=0;i<n;i++){
			r[n][n]+=a[i][j];
		}
		if(r[n][n]!=0){
			
			break;
		}else{
			r[n][n]=0;
			x=1;
		}
	}
	if(x==1) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;

	
	return 0;
}