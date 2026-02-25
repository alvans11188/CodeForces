#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,a,b;cin>>n>>m>>a>>b;
	int est1=n*a;
	int est2=(n/m*b)+(n%m*a);
	int est3=((n + m - 1) / m) * b;
	cout<< min({est1,est2,est3});
	return 0;
}