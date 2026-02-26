#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    
    while(t--) {
        int n; 
        cin >> n;
        
        vector<int> res;
        int p = 1;
        
        while(n > 0) {
            int d = n % 10;
            if(d > 0) {
                res.push_back(d * p);
            }
            n /= 10;
            p *= 10;
        }
        
        cout << res.size() << endl;
        for(int i = 0; i < res.size(); i++) {
            cout << res[i] << (i == res.size() - 1 ? "" : " ");
        }
        cout << endl;
    }
    
    return 0;
}