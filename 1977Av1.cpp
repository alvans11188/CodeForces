#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        cout << ((m>n)||(m-n)%2?"No":"Yes")<<endl;
    }
    return 0;
}