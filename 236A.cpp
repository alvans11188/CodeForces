#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	string nombre;cin>>nombre;
	int t,nombre2=0;
	
	//nombre2=nombre;
	t=nombre.length();
	sort(nombre.begin(),nombre.end());
	for(int i=0;i<t;i++){
		if(nombre[i]!=nombre[i+1]){
			nombre2++;
		}
	}
	
	if(nombre2%2==0){
		cout<<"CHAT WITH HER!";
	}else{
		cout<<"IGNORE HIM!";
	}
	return 0;
}