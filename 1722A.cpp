#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--){
		int s;cin>>s;
		string n;cin>>n;
		if(s!=5){
			cout<<"NO"<<endl;
		}else{
			string m="Timru";
			bool b=true;
			sort(n.begin(),n.end());
			for(int i=0;i<m.size();i++){
				if(n[i]==m[i]){
					
				}else{
					cout<<"NO"<<endl;
					b=false;
					break;
				}
			}
			if(b){
				cout<<"YES"<<endl;
			}
		}
		
	}
	return 0;
}