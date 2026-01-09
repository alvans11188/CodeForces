#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	int hora, minuto,hora2,minuto2,hora3,minuto3;
	char basura;
	cin>>hora>>basura>>minuto;
	cin>>hora2>>basura>>minuto2;
	
	hora3= (hora*60)+minuto;
	minuto3= (hora2*60)+minuto2;
	
	int total = (hora3+minuto3) / 2;
	
	int h,m;
	h=total/60;
	m=total%60;
	
	if(h<10){
		cout<<"0"<<h;
	}else{
		cout<<h;
	}
	cout<<":";
	if(m<10){
		cout<<"0"<<m;
	}else{
		cout<<m;
	}

	
	return 0;
}