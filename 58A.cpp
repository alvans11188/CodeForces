#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	string s;cin>>s;
	string h="hello";
	int j=0;
	int contador=0,t=s.size();
	for(int i=0;i<t;i++){
		if(s[i]==h[j]){
			j++;	
		}
	}
	if(j==5){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	return 0;
}