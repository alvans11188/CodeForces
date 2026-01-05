#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n=5;
	int matriz[n][n];
	for (int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin>>matriz[i][j];
		}
	}
	int fila=0,columna=0;
	for (int i=0;i<5;i++){
		fila++;
		columna=0;
		for(int j=0;j<5;j++){
			columna++;
			if(matriz[i][j]==1){
				i=5;
				j=5;
			}
		}
	}
	int c1=3,c2=3,suma1=0,suma2=0;
	if(fila<3){
		suma1=3-fila;
	}else{
		suma1=fila-3;
	}
	if(columna<3){
		suma2=3-columna;
	}else{
		suma2=columna-3;
	}
	int total=suma1+suma2;
	cout<<total;
	
	return 0;
}