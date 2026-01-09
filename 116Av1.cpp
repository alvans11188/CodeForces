#include <bits/stdc++.h>

using namespace std;

#define forn(i,n) for(int i=0;i<int(n);i++)

int main(void)
{
	int a,b,c;cin>>a;
	
	int pas_act=0;
	int cap_max=0;
	while(a--){
		cin>>b>>c;
		pas_act-=b;
		pas_act+=c;
		if(pas_act>cap_max){
			cap_max=pas_act;
		}
		
	}
	cout<<cap_max;
	return 0;
}