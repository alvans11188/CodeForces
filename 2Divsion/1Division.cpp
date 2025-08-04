#include <bits/stdc++.h>

using namespace std;

int main(){
	int cantidad;cin>>cantidad;
	
	while(cantidad--){
		int numero;cin>>numero;
		if(1900<=numero){
			cout<<"Division 1"<<endl;
		}else if((1600<=numero)&&(1899>=numero)){
			cout<<"Division 2"<<endl;
		}else if((1400<=numero)&&(1599>=numero)){
			cout<<"Division 3"<<endl;
		}else if(numero<=1399){
			cout<<"Division 4"<<endl;
		}
	}
	
	return 0;
}