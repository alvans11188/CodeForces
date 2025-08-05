// https://codeforces.com/problemset/problem/1676/A
#include <bits/stdc++.h>
using namespace std;

int main(){
	int cantidad;cin>>cantidad;
	//vector<int> suma1;
	//vector<int> suma2;
	
	string numero;
	while(cantidad--){
		int suma1=0,suma2=0;
		cin>>numero;
		for(int i=0;i<3;i++){
			int n1=(numero[i]-'0');
			suma1+=n1;
		}
		for(int i=3;i<6;i++){
			int n2=(numero[i]-'0');
			//suma2.push_back(n2);
			suma2+=n2;
		}
		if(suma1==suma2){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
		
	}
	
	return 0;
}