#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long x = 1;
        long long y = 1;
        long long z = x % P + y % P;
        int h = n - 2;
        while (h-- && n > 2)
        {
            z = x % P + y % P;
            x = y;
            y = z;
        }
        if (n > 2)
            cout << z % P;
        if (n <= 2)
            cout << "1";
        cout << endl;
    }
    return 0;
}