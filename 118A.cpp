#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	string palabra;cin>>palabra;
	int n,contador=0;
	vector <char> palabra2;
	n=palabra.length();
	for(int i=0;i<n;i++){
		if(palabra[i]=='a'||palabra[i]=='A'||palabra[i]=='o'||palabra[i]=='O'||palabra[i]=='y'||palabra[i]=='Y'||palabra[i]=='e'||palabra[i]=='E'||palabra[i]=='u'||palabra[i]=='U'||palabra[i]=='i'||palabra[i]=='I'){
			
		}else{
			palabra2.push_back('.');
			char minu=tolower(palabra[i]);
			palabra2.push_back(minu);
		}
	}
	for(int i=0;i<palabra2.size();i++){
		cout<<palabra2[i];
	}
	return 0;
}