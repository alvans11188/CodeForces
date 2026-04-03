#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--){
		string palabra;cin>>palabra;
		int t=palabra.size();
		int bandera=false;
		vector <char> v;
		//int repetidos=0;
		for(int i=0;i<t;i++){
				v.push_back(palabra[i]);
			}
			
			for(int i=1;i<t;i++){
				if(palabra[i]==palabra[i-1]){
					char extra= (palabra[i]=='z'?'a':'z');
					v.insert(v.begin() + i,extra);
					bandera=true;
					break;
				}
				
			}
		/*
		if(t==1){
			if(palabra[0]=='a'){
				palabra+='b';
			}else{
				palabra+='a';
			}
		}else{
		}*/
		if(bandera==false){
			char extra=(palabra[t-1]=='a'?'z':'a');
			cout<<palabra<<extra;
		}else{
			t=v.size();
			for(int i=0;i<t;i++){
				cout<<v[i];
			}
			
		} 
		cout<<endl;
				
	}
	return 0;
}