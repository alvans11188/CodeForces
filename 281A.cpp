#include <bits/stdc++.h>
using namespace std;

int main(){
	string entrada;cin>>entrada;
	
	for(int i=0;i<entrada.length();i++){
		if(i==0){
			entrada[0]=toupper(entrada[0]);
			cout<<entrada[0];
		}else{
			cout<<entrada[i];
		}
	}
	return 0;
}