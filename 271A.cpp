#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a;cin>>a;
	a++;
	int b = a/1000;
	int c = (a/100)%10;
	int d = (a/10)%10;
	int e = (a%10);
	int cen=0,nuevo;
	//cout<<b<<" "<<c<<" "<<d<<" "<<e;
	/*
	while(((b*1000+c*100+d*10+e)<=9000)&&(cen==0)){
		
		if((b != c && b != d && b != e && c != d && c != e && d != e)){
			cout<<a;
			cen=1;
		}else{
			a=(b*1000+c*100+d*10+e)+1;
			b = a/1000;
			c = (a/100)%10;
			d = (a/10)%10;
			e = (a%10);
		}
	}
	*/
	while(true){
	
		if(a==9000){
			cout<<"9012";
			break;
		}
		if((b != c && b != d && b != e && c != d && c != e && d != e)){
			cout<<a;
			break;
		}else{
			a++;;
			b = a/1000;
			c = (a/100)%10;
			d = (a/10)%10;
			e = (a%10);
		}
	}
	return 0;
}
