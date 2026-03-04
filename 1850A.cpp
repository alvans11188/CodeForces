#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,t;cin>>t;
	while(t--){
		cin>>a>>b>>c;
		int pri=a+c,seg=a+b,ter=b+c;
		if(pri>=10||seg>=10||ter>=10){
			cout<<"YES"<<endl;
		}else cout<<"NO"<<endl;
			
		
		
	}
	return 0;
}