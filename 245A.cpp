#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int exito_a = 0, total_a = 0;
    int exito_b = 0, total_b = 0;

    for (int i = 0; i < n; i++) {
        int t, x, y;
        cin >> t >> x >> y;
        if (t == 1) {
            exito_a += x;
            total_a += 10;
        } else {
            exito_b += x;
            total_b += 10;
        }
    }

    if (exito_a >= total_a / 2) cout << "LIVE" << endl;
    else cout << "DEAD" << endl;

    if (exito_b >= total_b / 2) cout << "LIVE" << endl;
    else cout << "DEAD" << endl;

    return 0;
}