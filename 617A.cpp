#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,contador=0;cin>>a;
	if(a!=0){
		while(a!=0)	{
			if(a>=5){
				a=a-5;
				contador++;
			}else if(a>=4){
				a=a-4;
				contador++;
			}else if(a>=3){
				a=a-3;
				contador++;
			}else if(a>=2){
				a=a-2;
				contador++;
			}else if(a>=1){
				a=a-1;
				contador++;
			}
		}
	}
	cout<<contador;
	return 0;
}