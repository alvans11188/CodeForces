#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		string s;cin>>s;
		int t=s.size();
		vector <char> m;
		for(int i=0;i<t;i++){
			m.push_back(s[i]);
		}
		sort(m.begin(),m.end());
		for(int i=0;i<t;i++){
			cout<<m[i];
		}
		cout<<endl;
		m.clear();
	}
	return 0;
}