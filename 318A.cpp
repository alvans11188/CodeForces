#include <iostream>

using namespace std;

int main() {
    long long n, k;
    if (!(cin >> n >> k)) return 0;

    
    long long impares = (n + 1) / 2;

    if (k <= impares) {
        
        cout << 2 * k - 1 << endl;
    } else {
        
        long long k_par = k - impares;
        cout << 2 * k_par << endl;
    }

    return 0;
}