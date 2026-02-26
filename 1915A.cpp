#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,t;cin>>t;
	while(t--){
		cin>>a>>b>>c;
		if(a==b) cout<<c;
		else if(a==c) cout<<b;
		else cout<<a;	
		cout<<endl;
	}
	return 0;
}