#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a,b="qwertyuiopasdfghjkl;zxcvbnm,./";
	char d;cin>>d;
	int f;
	if(d=='R'){
		f=-1;
	}else{
		f=+1;
	}
	cin>>a;
	for(int i=0;i<a.size();i++){
		int pos=b.find(a[i]);
		cout<<b[pos+f];
	}
	
	return 0;
}