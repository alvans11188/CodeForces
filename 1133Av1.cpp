#include <bits/stdc++.h>
using namespace std;


int main(void)

{
	string a,b;cin>>a>>b;
	string a1,b1;
	a1+=a[0];
	a1+=a[1];
	a1+=a[3];
	a1+=a[4];
	
	b1+=b[0];
	b1+=b[1];
	b1+=b[3];
	b1+=b[4];

	int n1= ( stoi(a1.substr(0,2)) * 60 + stoi(a1.substr(2,2)));
	int n2= ( stoi(b1.substr(0,2)) * 60 + stoi(b1.substr(2,2)));
	
	int prom=(n1+n2) / 2;
	
	cout << (prom/60<10?"0":"") << prom/60 <<":"<< (prom%60<10?"0":"") << prom%60;
	
	//cout<<n1;
	
	
	
	return 0;
}