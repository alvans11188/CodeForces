#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t; // n = cantidad de niños, t = tiempo en segundos
    
    string s;
    cin >> s;

    // Bucle exterior: se repite t veces (una por cada segundo)
    for (int tiempo = 0; tiempo < t; tiempo++) {
        
        // Bucle interior: recorre la fila buscando parejas BG
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == 'B' && s[i+1] == 'G') {
                // Intercambiamos posiciones
                swap(s[i], s[i+1]);
                
                // IMPORTANTE: Incrementamos i para no mover al mismo niño 
                // otra vez en el mismo segundo
                i++; 
            }
        }
    }

    cout << s << endl;
    return 0;
}