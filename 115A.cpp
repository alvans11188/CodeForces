#include <bits/stdc++.h>
using namespace std;
int main()
{
	//resolucion por fuerza bruta, numero es relativamente pequenio
	int n;cin>>n;
	vector<int> jefes(n+1);
	for(int i=1;i<=n;i++) cin>>jefes[i];
	int grupos_m=0;
	for(int i=1;i<=n;i++){
		int profundidad = 0;
		int actual = i;
		
		while(actual!=-1){
			actual=jefes[actual];
			profundidad++;
		}
		grupos_m=max(grupos_m,profundidad);
	}
	cout<<grupos_m<<endl;
	return 0;
}