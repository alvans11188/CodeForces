#include <bits/stdc++.h>

using namespace std;
int main(){
	int a,b,n,i,mayor=0,menor=0;cin>>n;
	int p=1;
	vector<int> bus;
	while(n--){
		cin>>a;
		for(i=0;i<a;i++){
			bus.pop_back();
		}
		cin>>b;
		for(i=0;i<b;i++){
			bus.push_back(1);
		}
		
		menor=bus.size();
		cout<<mayor<<endl;
		if(menor>mayor){
			mayor=menor;
		}
	}
	cout<<mayor;
	return 0;
}