#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;cin>>a>>b;
	int c=min(a,b);
	int d=max(a,b) - c;
	int iguales=d/2;
	cout<<c<<" "<<iguales;
	return 0;
}