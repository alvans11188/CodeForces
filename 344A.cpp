#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	int n,salida=1;cin>>n;
	string valor1,valor2;cin>>valor1;
	
	while(--n){
		cin>>valor2;
		if(valor1!=valor2){
			salida++;
			valor1=valor2;
		}
	}
	cout<<salida;
	return 0;
}