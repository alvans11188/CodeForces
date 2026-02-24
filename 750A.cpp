#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a=5,b=0,n,k;cin>>n>>k;
	int t=240-k;
	
	while(b<n){
		if(t>=a){
			t-=a;
			a+=5;
			b++;
			
		}else{
			break;
		}
	}
	cout<<b;
	return 0;
}