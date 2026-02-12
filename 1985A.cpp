#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	string a,b;
	char c;
	for(int i=0;i<t;i++){
		cin>>a>>b;
		c=a[0];
		a[0]=b[0];
		b[0]=c;
		cout<<a<<" "<<b<<endl;
	}
	return 0;
}