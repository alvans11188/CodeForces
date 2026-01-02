#include <bits/stdc++.h>
using namespace std;
int main ()
{
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);

    int x,k,i,a,b;

    while (cin >> x)
    {
        k = x;

        for (i=1; i<=3; i++)
        {
            cin >> a >> b;

            if (k == a)
                k = b;
            else if (k == b)
                k = a;
        }

        cout << k << endl;
    }

    return 0;
}