#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	int n,p;cin>>n;
	vector <int> m(n+1);
	for(int i=1;i<=n;i++){
		cin>>p;
		m[p]=i;
	}
	
	for(int i=1;i<=n;i++){
		cout<<m[i]<<(i==n?"":" ");
	}
	
	return 0;
}