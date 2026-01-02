//https://codeforces.com/problemset/problem/35/A

#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);   
    freopen("output.txt", "w", stdout);
    int a[3]={0,0,0};
    int bola,s1,s2,t;cin>>bola;
    a[bola-1]=1;
    for(int i=0;i<3;i++){
        cin>>s1>>s2;
        t=a[s1-1];
        a[s1-1]=a[s2-1];
        a[s2-1]=t;
    }
    cout<<(a[0]?1:(a[1]?2:3));
}

