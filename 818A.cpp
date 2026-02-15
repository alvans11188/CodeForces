#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long ganadores,c,ng,m,n,k;cin>>n>>k;
	ganadores = n/2;
	m=ganadores/(1+k);
	c=k*m;
	ng=n-(m+c);
	cout<<m<<" "<<c<<" "<<ng;
	return 0;
}