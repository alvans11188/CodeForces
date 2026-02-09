#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> x(4);
    for(int i = 0; i < 4; i++) cin >> x[i];

    // Ordenamos para que el mayor quede al final
    sort(x.begin(), x.end());

    // El mayor es x[3] (la suma de los tres)
    // Imprimimos las diferencias
    cout << x[3] - x[0] << " " << x[3] - x[1] << " " << x[3] - x[2] << endl;

    return 0;
}