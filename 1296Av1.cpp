#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;cin>>t;
	while(t--){
		int n,c, add=0;cin>>n;
		for(int i=0;i<n;i++){
			cin>>c;
			add+=(c%2);
		}
		if(n%2) cout<<(add?"YES":"NO")<<endl;
		else cout<<(add&&add!=n?"YES":"NO")<<endl;
	}
	return 0;
}