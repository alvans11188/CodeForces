#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a;cin>>a;
	int b[a][3];
	for(int i=0;i<a;i++){
		for(int j=0;j<3;j++){
			cin>>b[i][j];
		}
	}
	
	for(int i=0;i<a;i++){
		for(int j=0;j<3;j++){
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	int x=0,t=0;
	for(int j=0;j<3;j++){
		for(int i=0;i<a;i++){
			x+=b[i][j];
		}
		if(x!=0){
			t=0;
			break;
		}else{
			t=1;
			x=0;
		}
	}
	if(t==1) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	
	return 0;
}