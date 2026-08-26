#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;cin>>n;
	string a;cin>>a;
	vector <pair<char,int>> b;
	for(int i=0;i<n;i++){
		if(find(b.begin(),b.end(),a[i])==b.end()) {
			b.push_back(a[i]);
		}
	}
	
    cout << endl;
	return 0;
}
