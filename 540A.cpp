#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int r=0;
    for(int i=0;i<n;i++){
        
        if(a[i]>=b[i]){
            r=a[i]-b[i];
            r++;
        }else{
            while(b[i]%10!=a[i]){
                b[i]++;
                r++;
            }
        }
    }
    cout<<r<<endl;
    return 0;
}