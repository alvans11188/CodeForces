#include <bits/stdc++.h>

#define forn(i,n) for(int i=0;i<int(n);i++)
using namespace std;
int main(){
	string a;cin>>a;
	int t=a.length();
	char p='n';
	while(t--){
		forn(i,t){
			if(a[i]=='1'&&a[i+1]=='1'&&a[i+2]=='1'&&a[i+3]=='1'&&a[i+4]=='1'&&a[i+5]=='1'&&a[i+6]=='1') {
				p='s';
			}
			if(a[i]=='0'&&a[i+1]=='0'&&a[i+2]=='0'&&a[i+3]=='0'&&a[i+4]=='0'&&a[i+5]=='0'&&a[i+6]=='0') {
				p='s';
			}
		}	
	}
	if(p=='s') cout<<"YES";
	else cout<<"NO";
	return 0;
}