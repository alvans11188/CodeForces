#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	int n,a,b;cin>>n;
	vector <pair<int,int>> juegos(n);
	for(int i=0;i<n;i++){
		cin>>juegos[i].first>>juegos[i].second;
	}
	int contador1=0,contador2=0;
	for(int i=0;i<n;i++){
		if(juegos[i].first>juegos[i].second){
			contador1++;
		}else if(juegos[i].first<juegos[i].second){
			contador2++;
		}
	}
	if(contador1>contador2){
		cout<<"Mishka";
	}else if(contador1==contador2){
		cout<<"Friendship is magic!^^";
	}else{
		cout<<"Chris";
	}
	//cout<<(contador1>contador2?"Mishka":"Chris")
	return 0;
}