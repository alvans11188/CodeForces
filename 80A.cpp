#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;cin>>n>>m;
	bool b=true;
	n++;
	while(true)
	{
		bool a=true;
		for(int i=2;i<n;i++){
			
			if(n%i==0){
				a=false;
				break;
			}
		}
		if(a){
			b=true;
			break;
		}else{
			n++;
		}
		
	}
	if(n==m){
		cout<<"YES"<<endl;
	}else {
		cout<<"NO"<<endl;
	}
	return 0;
}