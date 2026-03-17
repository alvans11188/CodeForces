#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;cin>>n>>m;
	int a=1;
	//bool ;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(i%2==0){
				cout<<"#";
			}else{
				if(a%2!=0&&j==m-1){
					cout<<"#";
				}else if(a%2==0&&j==0){
					cout<<"#";
				}else{
					cout<<".";
				}
			}
		}
		if(i%2!=0){
			a++;
		}
		cout<<endl;
	}
	return 0;
}