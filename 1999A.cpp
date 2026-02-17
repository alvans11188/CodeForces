#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,cont,t;cin>>t;
	while(t--){
		int n;cin>>n;
		cont=0;
		while(n!=0){
			a=n%10;
			cont+=a;
			n/=10;
		}
		cout<<cont<<endl;
	}
	return 0;
}