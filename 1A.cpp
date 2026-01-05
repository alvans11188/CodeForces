#include <bits/stdc++.h>
using namespace std;

int main(){
	long long largo,ancho,loza;cin>>largo>>ancho>>loza;
	//int loza;cin>>loza;
	
	
	long long suma1 = (largo + loza- 1) / loza;
    long long suma2 = (ancho + loza - 1) / loza;
    
	long long total =suma1*suma2;
	cout<<total;
	
	return 0;
}