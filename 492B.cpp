#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a;cin>>n>>a;
	vector <int> pos(n);
	for(int i=0;i<n;i++){
		cin>>pos[i];
	}
	sort(pos.begin(),pos.end());
	int max1=0;
	for(int i=0;i<n-1;i++){
		int dis=pos[i+1]-pos[i];
		if(dis>max1){
			max1=dis;
		}
	}
	//bordes
	double ini=pos[0];
	double final=a - pos[n-1];
	double inter=max1/2.0;
	
	double max2=max({ini,final,inter});
	cout<< fixed << setprecision(10)<< max2;
	return 0;
}