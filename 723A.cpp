#include <bits/stdc++.h>
using namespace std;
int main()
{
	//int b,c;
	int b;
	int r1,r2;
	int o1,o2,o3;
	vector <int> a;	
	for(int i=0;i<3;i++){
		cin>>b;
		a.push_back(b);
	}
	sort(a.begin(),a.end());
	r1=a[2]-a[1];
	r2=a[1]-a[0];
	int r3=r1+r2;
	cout<<r3;
	
	return 0;
}