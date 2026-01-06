#include <bits/stdc++.h>
using namespace std;
int main(){
	long long b;
	int total,a,c,d;cin>>a>>b>>c;
	int suma=0;
	for(int i=1;i<=c;i++){
		d=a*i;
		suma=suma+d;
	}
	if(suma>b){
		total=suma-b;
		
	}else{
		total=0;
	}
	
	cout<<total;
	return 0;
}