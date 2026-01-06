#include <bits/stdc++.h>
using namespace std;
int main(){
	string a,b;cin>>a>>b;
	int cen=0;
	int t=a.length();
	if(a.length()==b.length()){
		for(int i=0;i<a.length();i++){
		
		if(a[i]!=b[t-1]) cen=1;
		t--;
		}
		if(cen==1){
			cout<<"NO";
		}else{
			cout<<"YES";
		}
	}else{
		cout<<"NO";
	}

	return 0;
}