#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;
long long lt(long long n, long long k)
{
    if (k == 0)
    {
        return 1;
    }
    if (k == 1)
    {
        return n % mod;
    }
    long long x = lt(n, k / 2);
    if (k % 2 == 0)
    {
        return (x * x) % mod;
    }
    else
    {
        return (((x * x) % mod) * n) % mod;
    }
}
int main()
{
    while (1)
    {
        long long n, k;
        cin >> n >> k;
        if (n == 0 && k == 0)
        {
            break;
        }
        cout << lt(n, k) << endl;
    }
}