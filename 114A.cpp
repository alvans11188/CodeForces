#include <bits/stdc++.h>
using namespace std;
int main()
{



    int n;
    cin >> n;
    vector<int> a(n);

    int max_val = 0, min_val = 101;
    int max_idx = 0, min_idx = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        
        // Queremos el PRIMER máximo (el más a la izquierda)
        if (a[i] > max_val) {
            max_val = a[i];
            max_idx = i;
        }
        
        // Queremos el ÚLTIMO mínimo (el más a la derecha)
        if (a[i] <= min_val) {
            min_val = a[i];
            min_idx = i;
        }
    }

    int result = max_idx + (n - 1 - min_idx);

    // Ajuste si el máximo está a la derecha del mínimo
    if (max_idx > min_idx) {
        result--;
    }

    cout << result << endl;

    return 0;
}