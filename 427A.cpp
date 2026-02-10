#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;cin>>n;
	int ofi_l=0,sin_t=0;
	int d;	
	for (int i=0;i<n;i++){
		cin>>d;
		if(d>0){
			ofi_l+=d;
		}else{
			if(ofi_l>0){
				ofi_l--;
			}else{
				sin_t++;
			}
		}
	}
	cout<<sin_t;
	return 0;
}