#include <bits/stdc++.h>
using namespace std;
int main()
{
	string p;cin>>p;
	for(int i=0;i<p.size();i++){
		if(p[i]=='W'&&p[i+1]=='U'&&p[i+2]=='B'){
			cout<<" ";
			i+=2;
		}else{
			cout<<p[i];
		}
	}
	return 0;
}