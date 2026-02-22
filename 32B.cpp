#include <bits/stdc++.h>
using namespace std;
int main()
{
	string c;cin>>c;
	int t=c.size();
	string a[t];
	for(int i=0;i<t;i++){
		if(c[i]=='-'&&c[i+1]=='-'){
			a[i]='2';
			i++;
		}else if(c[i]=='-'&&c[i+1]=='.'){
			a[i]='1';
			i++;
		}else{
			a[i]='0';
		}
		
	}
	for(int i=0;i<t;i++){
		cout<<a[i];
	}
	return 0;
}
