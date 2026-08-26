#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b,c;cin>>n>>a>>b>>c;
	int max=0;
	
	for(int i=0;i*a<=n;i++){
		for(int j=0;i*a+j*b<=n;j++){
			
			int resto=n-(i*a+j*b);
			if(resto%c==0){
				int k=resto/c;
				int total=i+j+k;
				if(total>max){
					max=total;
				}
			}
		}
	}
	cout<<max;
	return 0;
}