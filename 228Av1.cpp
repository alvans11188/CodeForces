#include <bits/stdc++.h>
using namespace std;
int main()
{
	//int a;cin>>a;
	vector<int> b;
	int d[4];
	for(int i=0;i<4;i++){
		int c;cin>>c;
		d[i]=c;
		b.push_back(c);
	}
	sort(b.begin(),b.end());
	int con=0;
	for(int i=0;i<3 ;i++){
		if(b[i]!=b[i+1]){
			con++;
		};
		
	}
	cout<<con;
	
	
	return 0;
}
