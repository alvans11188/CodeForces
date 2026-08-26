#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	
	int repetir,t;cin>>repetir;
	int tamanio,c1=0;
	
	string dato;
	while(repetir--){
		cin>>tamanio>>dato;
		t=dato.length();
		for(int i=0;i<t;i++){
			if(dato[i]=='2'){
				if(dato[i+1]=='0'){
					if(dato[i+2]=='2'){
						if(dato[i+3]=='6'){
							c1=0;
						}else if(dato[i+3]=='5'){
							c1=1;
						}
					}
				}
			}
		}
		cout<<c1<<endl;
	}
	
	return 0;
}