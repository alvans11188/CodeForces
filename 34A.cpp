#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;cin>>n;
	int a[n];
	for( int i=0;i<n;i++){
		cin>>a[i];
	}
	int me=abs(a[1]-a[0]),ma;
	int pos1=1,pos2=2;
	for(int i=2;i<n;i++){
		ma=abs(a[i]-a[i-1]);
		
		if(ma<me){
			pos1=i;
			pos2=i+1;
			me=ma;
		}
	}
	
	if(abs(a[n-1]-a[0])<me){
		pos1=n;
		pos2=1;
		
	}
	cout<<pos1<<" "<<pos2<<endl;
	return 0;
}