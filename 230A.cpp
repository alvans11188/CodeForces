#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int fi,fd,nd,bono;cin>>fi>>nd;
	vector<pair<int,int>> lista_d(nd);
	for(int i=0;i<nd;i++){
		cin>>lista_d[i].first>>lista_d[i].second;
	}
	sort(lista_d.begin(),lista_d.end());
	bool p=false;
	for(int i=0;i<nd;i++){
		
		if(fi>lista_d[i].first){
			fi+=lista_d[i].second;
		}else{
			p=true;
			break;
		}
	}
	cout<<(p==false?"YES":"NO");
	return 0;
}