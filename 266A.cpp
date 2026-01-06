#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,con=0;cin>>a;
	string colores;cin>>colores;
	for(int i=0;i<colores.length();i++){
		if(colores[i]==colores[i+1]){
			con++;
		}
	}
	cout<<con;
	return 0;
}
