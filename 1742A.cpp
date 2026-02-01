#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	int t;cin>>t;
	int a,b,c;
	while(t--){
		cin>>a>>b>>c;
		int a1,a2,a3;
		a1=a+b;
		a2=a+c;
		a3=b+c;
		if(a1==c||a2==b||a3==a){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
		
	}
	return 0;
}