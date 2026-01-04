#include <bits/stdc++.h>

using namespace std;

int main(void){
    int cantidad, tamano;cin>>cantidad;
    string palabra,palabra2;
    while(cantidad--){
        cin>>palabra;
        tamano = palabra.length();
        if (tamano > 10){
            char n1,n2;
            n1=palabra[0];
            n2=palabra[tamano-1];
            tamano = tamano -2;
            cout<<n1<<tamano<<n2<<endl;
        }else{
            cout<<palabra<<endl;
        }
    }

}