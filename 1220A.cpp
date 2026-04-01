#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;cin>>n;
	char a[n];
	string palabra;cin>>palabra;
	
	for(int i=0;i<n;i++){
		a[i]=palabra[i];
	}
	/*
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
	cout<<endl;
	*/
	vector <char> b;
	for(int i=0;i<n;i++){
		if(a[i]=='n'){
			b.push_back(a[i]);
		}else if(a[i]=='z'){
			b.push_back(a[i]);
		}
	}
	sort(b.begin(),b.end());
	/*
	for(int i=0;i<b.size();i++){
		cout<<b[i];
	}
	*/
	for(int i=0;i<b.size();i++){
		if(b[i]=='n'){
			cout<<"1 ";
		}else{
			cout<<"0 ";
		}
	}
	return 0;
}