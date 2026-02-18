#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,k,l,c,d,p,nl,np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int ml=k*l;
	int bebidas=ml/nl;
	int limon=c*d;
	int sal=p/np;
	int total= min({bebidas,limon,sal});
	cout<<total/n;
	return 0;
}