#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	
	while(t--){
		int a,p=0,im=0,n;cin>>n;
		for (int i=0;i<n;i++){
			cin>>a;
			if(a%2==0) p++;
			else im++;	
			
		}
		if(im%2==0){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}