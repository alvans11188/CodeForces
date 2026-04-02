#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--){
		long long n,a;cin>>n>>a;
		vector <int> m;
		int b;
		for(int i=0;i<n;i++){
			cin>>b;
			m.push_back(b);
		}
		sort(m.begin(),m.end());
		reverse(m.begin(),m.end());
		int ta=m.size();
		int encima=0;
		for(int i=0;i<ta;i++){
			//encima=0;
			if(m[i]>=a){
				encima++;
			}else{
				int suma=0,contador=1;
				bool equipo=false;
				for(int j=i+1;j<ta;j++){
					contador++;
					if((long long)m[j]*contador>=a){
						encima++;
						i=j;
						equipo=true;
						break;
					}
				}
				if(!equipo) break;
			}
		}
		cout<<encima<<endl;
	}
	return 0;
}