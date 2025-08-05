//https://codeforces.com/problemset/problem/1791/A
#include <bits/stdc++.h>
using namespace std;

int main(){
	int cantidad;cin>>cantidad;
	vector <char> caracteres;
	string codeforces="codeforces";
	for(int i=0;i<cantidad;i++){
		char car;cin>>car;
		caracteres.push_back(car);
		
		int cen=0;
		for(int j=0;j<codeforces.size();j++){
			 
			if(caracteres[i]==codeforces[j]){
				cen=1;
			}
			
		}
		if(cen==1) cout<<"YES";
			else cout<<"NO";
			cout<<"\n";
	}
	return 0;
}