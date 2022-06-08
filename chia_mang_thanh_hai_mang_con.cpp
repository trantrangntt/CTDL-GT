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
        int n, k;
        cin >> n >> k;
        int a[n];
        int sum1 = 0, s = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s += a[i];
        }
        sort(a, a + n);

        if (k < n - k)
        {
            for (int i = 0; i < k; i++)
            {
                sum1 += a[i];
            }
        }
        else
        {
            for (int i = n - 1; i >= n - k; i--)
            {
                sum1 += a[i];
            }
        }
        cout << abs(s - sum1 - sum1) << endl;
    }
    return 0;
}