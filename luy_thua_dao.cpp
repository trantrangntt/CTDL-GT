#include <bits/stdc++.h>
using namespace std;
const int P = 1e9 + 7;
long long tinh(long long n, long long k)
{
    if (k == 0)
        return 1;
    if (k == 1)
        return n % P;
    long long temp = tinh(n, k / 2);
    if (k % 2 == 0)
        return temp * temp % P;
    else
        return (temp * temp % P) * n % P;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long m = n;
        long long x = 0;
        while (m > 0)
        {
            x = x * 10 + m % 10;
            m /= 10;
        }
        cout << tinh(n, x) << endl;
    }
}