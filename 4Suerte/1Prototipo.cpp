#include <bits/stdc++.h>
using namespace std;

int main(){
	int entradas;cin>>entradas;
	
	while(entradas--){
		char a,b,c,d,e,f;cin>>a>>b>>c>>d>>e>>f;
		if(int(a)+int(b)+int(c)==int(d)+int(e)+int(f)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		
	}

	return 0;
}