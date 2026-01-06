#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,con1=0,con2=0;cin>>a;
	string b;cin>>b;
	for(int i=0;i<b.length();i++){
		if(b[i]=='A'){
			con1++;
		}else{
			con2++;
		}
	}
	if(con1>con2){
		cout<<"Anton";
	}else if(con2>con1){
		cout<<"Danik";
	}else{
		cout<<"Friendship";
	}
	return 0;
	
	
}