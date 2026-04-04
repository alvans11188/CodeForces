#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n;cin>>n;
	//int t=n.size();
	vector <long long> v;
	int a,b,c;
	while(n!=0){
		a=n%10;
		v.push_back(a);
		n=n/10;
	}
	reverse(v.begin(),v.end());
	/*
	for(int i=0;i<t;i++){
		
		a[i]=n[i];
	}
	for(int i=0;i<v.size();i++){
		cout<<v[i];
	}*/
	
	bool bandera=false;
	for(int i=0;i<v.size();i++){
		if(v[i]==1&&v[i+1]!=4){
			
		}else if(v[i]==1&&v[i+1]==4&&v[i+2]!=4){
			i++;
		}else if(v[i]==1&&v[i+1]==4&&v[i+2]==4){
			i+=2;
		}else{
			bandera=true;
			break;
		}
	}
	if(bandera==false){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	
	return 0;
}