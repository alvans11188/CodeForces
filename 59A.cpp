#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,contador=0;
	string palabra;cin>>palabra;
	for(int i=0;i<palabra.length();i++){
		char mayus=toupper(palabra[i]);
		if(palabra[i]==mayus){
			contador++;
		}
	}
	int d=palabra.length();
	d=d/2;
	if(d%2==0.5){
		d=d+0.5;
	}
	char minu;
	if(contador<=d){
		for(int i=0;i<palabra.length();i++){
			minu=tolower(palabra[i]);
			cout<<minu;
		}
	}else{
		for(int i=0;i<palabra.length();i++){
			minu=toupper(palabra[i]);
			cout<<minu;
		}
	}
	return 0;
}