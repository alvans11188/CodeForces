#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		string b;cin>>b;
		vector <char> b2;
		for(int i=0;i<n;i++){
			b2.push_back(b[i]);
		}
		sort(b2.begin(),b2.end());
		
		string b3="";
		b3=b2[0];
		for(int i=1;i<n;i++){
			if(b2[i-1]!=b2[i]){
				b3+=b2[i];
			}
		}
		int ta=b3.size();
		for(int i=0;i<n;i++){
			for(int j=0;j<ta;j++){
				if(b[i]==b3[j]){
					cout<<b3[ta-1-j];
					break;
				}
			}
		}
		cout<<endl;
		
				
	}
	
	return 0;
}
