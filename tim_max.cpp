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
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        ll sum = 0;
        for (int i = 1; i < n; i++)
        {
            sum += a[i] * i;
            sum %= P;
        }
        cout << sum << endl;
    }
    return 0;
}