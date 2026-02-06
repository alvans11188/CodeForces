#include <iostream>
using namespace std;

int main() {
    int n, t;
    cin >> n;

    
    if (n % 4 == 0 || n % 7 == 0 || n % 44 == 0 || n % 47 == 0 || n % 74 == 0 || n % 77 == 0 || n % 444 == 0 || n % 447 == 0 || n % 474 == 0 || n % 477 == 0) {
        cout << "sí" << endl;
    } 
    else {
        
        int temp = n; 
        bool esSuertudo = true;
        
        while (temp != 0) {
            t = temp % 10;
            if (t != 4 && t != 7) { 
                esSuertudo = false;
                break;
            }
            temp /= 10; 
        }

        if (esSuertudo) {
            cout << "sí" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}