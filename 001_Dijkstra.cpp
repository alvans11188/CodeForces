#include <bits/stdc++.h>
using namespace std;
const long long inf=1e18;

struct arista{
	int destino;
	int peso;
};
int main()
{
	int n=8;
	int origen=1;
	vector<vector<arista>> adyacencia(n+1);
	adyacencia[1].push_back({2,9});
	adyacencia[2].push_back({3,23});
	adyacencia[3].push_back({5,2});
	adyacencia[5].push_back({8,16});
	
	vector<long long>distancia(n+1,inf);
	
	vector<int> padre(n+1,-1);
	
	priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int >>> pq;
	
	distancia[origen]=0;
	pq.push({0,origen});
	
	while(!pq.empty()){
		long long d_actual = pq.top().first;
		int u=pq.top().second;
		pq.pop();
		
		if(d_actual>distancia[u]) continue;
		
		for(auto& e:adyacencia[u]){
			int v=e.destino;
			int peso=e.peso;
			
			if(distancia[u]+ peso<distancia[v]){
				distancia[v] = distancia[u]+peso;
				padre[v]=u;
				pq.push({distancia[v],v});
			}
		}
	}
	if(distancia[5]==inf) cout<<"NO HAY CAMINO AL NODO 5"<<endl;
	else {
		cout <<"DISTANCIA MINIMA AL NODO 5: "<<distancia[5]<<endl;
		
		cout<<"RUTA: ";
		vector<int> ruta;
		for(int v=5;v!=-1;v=padre[v]){
			ruta.push_back(v);
		}
		reverse(ruta.begin(),ruta.end());
		for(int i=0;i<ruta.size();i++){
			cout<<ruta[i]<<(i==ruta.size()-1?"":"->");
		}
		cout<<endl;
	} 
	return 0;
}