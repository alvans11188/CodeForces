#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int k;cin>>k;
		int a=0;
		for(int i=0;i<k;i++){
			a++;
			while(a%10==3||a%3==0){
				a++;
			}
			
		}
		cout<<a<<endl;
	}
	return 0;
}