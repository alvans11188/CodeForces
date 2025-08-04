/*
A.Plus or Minus
https://codeforces.com/problemset/problem/1807/A

*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,b,c,cantidad;
	cin>>cantidad;
	while(cantidad--){
		cin>>a>>b>>c; 
		//c=a+b;
		if((a+b)==c){
			cout<<"+"<<endl;
		}else{
			cout<<"-"<<endl;
		}
		
	}
	
	return 0;
}