#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,a;cin>>n;
		int b[n];
		for(int i=0;i<n;i++){
			cin>>a;
			b[i]=a;
		}
		
		/*for(int i=0;i<n;i++){
			cout<<b[i]<<" ";
		}
		*/
		vector <int> c;
		int m=n,o=0;
		for(int i=0;i<n;i++){
			if(i%2==0){
				c.push_back(b[o]);
				o++;
			}else{
				c.push_back(b[m-1]);
				m--;
			}
		}
		for(int i=0;i<n;i++){
			cout<<c[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}