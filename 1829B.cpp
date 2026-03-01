#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--){
		int a,contador=0,max=0,n;cin>>n;
		for(int i=0;i<n;i++){
			cin>>a;
			if(a==0){
				contador++;
			}else{
				if(contador>max){
					max=contador;
				}
				contador=0;
			}
		}
		if(contador > max){
            max= contador;
        }
		cout<<max<<endl;
	}
	return 0;
}