#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string entrada;
    cin >> entrada;
    vector<int> arreglo1;
    
    for(int i=0;i<entrada.length();i++){
        if(entrada[i] == '1') arreglo1.push_back(1);
        else if (entrada[i] == '2') arreglo1.push_back(2);
        else if (entrada[i] == '3') arreglo1.push_back(3);
    }
    
    sort(arreglo1.begin(), arreglo1.end());

    
    for (int i=0; i<arreglo1.size(); i++) {
        if (i > 0) {
        cout << '+';
	    }
	    cout << arreglo1[i];
       
    }
    
    return 0;
}