#include <bits/stdc++.h>

using namespace std;

int main(void){
    int cantidad,a;cin>>cantidad;
    int arreglo[cantidad][cantidad];
    for (int i=0;i<cantidad;i++){
        for(int j=0;j<cantidad;j++){
            cin>>a;
            arreglo[i][j]=a;
        }
    }
    int contador1=0, contador2=0;
    for (int i=0;i<cantidad;i++){
        for(int j=0;j<cantidad;j++){
            if(arreglo[i][j]>0){
                contador2++;
            }
        }
        if(contador2>1){
            contador1++;
            contador2=0;
        }
    }
    cout<<contador1<<endl;
}