#include <iostream>

using namespace std;

int main(){
	int repeticiones;cin>>repeticiones;
	int a,b;
	while(repeticiones--){
		cin>>a>>b;
		
		cout<<min(a,b)<<" "<<max(a,b)<<endl;
	}
	
	
	return 0;
}