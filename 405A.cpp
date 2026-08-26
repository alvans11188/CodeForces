#include <bits/stdc++.h>
using namespace std;
int main()
{
	int nu,n;cin>>n;
	vector <int> a;
	for(int i=0;i<n;i++){
		cin>>nu;
		a.push_back(nu);
	}
	sort(a.begin(),a.end());
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}