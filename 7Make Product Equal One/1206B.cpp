//https://codeforces.com/problemset/problem/1206/B
#include <bits/stdc++.h>
using namespace std;
int main(){
	int entradas;cin>>entradas;
	long long contador=0;
	vector<int> arreglo;
	while(entradas--){
		int dato;cin>>dato;
		arreglo.push_back(dato);
	}
	int ceros=0,negativos=0;
	for(int i=0;i<arreglo.size();i++){
		int dato=arreglo[i];
		if(arreglo[i]<0){
			contador += (-1 - dato);
			negativos++;
		}else if(dato>0){
			contador+=(dato-1);
		}else{
			ceros++;
			contador +=1;
		}
	}
	if(negativos % 2!=0&&ceros==0){
		contador+=2;
	}
	
	cout<<contador<<endl;
	return 0;
}