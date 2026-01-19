#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,f=0;cin>>n;
	if(n%2==0){
		f=n/2;
	}else{
		f=( (n+1)/2)*-1;
	}
	
	cout<<f;
	return 0;
}