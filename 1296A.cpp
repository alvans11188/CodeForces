#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		int a[n];
		int impar=0,par=0;
		int sum=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]%2!=0){
				impar++; 
			}else par++;
			sum=sum+a[i];
		}
		if(sum%2!=0){
			cout<<"YES"<<endl;
		}else if((impar>0&&par>0)){
			cout<<"YES"<<endl;
		}else if(par==0&&n%2!=0){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}