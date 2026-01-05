#include <bits/stdc++.h>

using namespace std;

int main (void)
{
	int entrada,valor=0;cin>>entrada;
	string operacion;
	
	while (entrada--)
	{
		cin>>operacion;
		if(operacion[1]=='+'){
			valor++;
		}else{
			valor--;
		}
	}
	cout<<valor;
	return 0;	
}