#include <bits/stdc++.h>
using namespace std;
int main(){
	string a,b;cin>>a>>b;
	int suma=0,t;
	
	t=a.length();
	int sum1=0,sum2=0,sum3=0;
	for (int i=0;i<t;i++){
		char letra1=tolower(a[i]);
		char letra2=tolower(b[i]);
		if(letra1<letra2){
			cout<<-1;
			return 0;
		}else if(letra1>letra2){
			cout<<1;
			return 0;
		}
	}
	cout<<0;
	
	return 0;
}