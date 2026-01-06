#include <bits/stdc++.h>
using namespace std;
int main(){
	long long a,b;cin>>a;
	int cen=0,con=0,con2=0;
	while(a!=0){
		if(a%10==4||a%10==7){
			con2++;
		}
		
		a=a/10;
	}
	if(con2==4||con2==7){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	return 0;
}