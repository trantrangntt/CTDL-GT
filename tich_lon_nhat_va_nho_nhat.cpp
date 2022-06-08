#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        long long n[a], m[b];
        for (int i = 0; i < a; i++)
            cin >> n[i];
        for (int i = 0; i < b; i++)
            cin >> m[i];
        sort(n, n + a);
        sort(m, m + b);
        cout << n[a - 1] * m[0] << endl;
    }
    return 0;
}