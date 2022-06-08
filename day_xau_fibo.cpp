#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        long long dp[n + 1];
        dp[1] = 1;
        dp[2] = 1;
        for (int i = 3; i <= n; i++)
        {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        while (true)
        {
            if (n == 1)
            {
                cout << "A" << endl;
                break;
            }
            else if (n == 2)
            {
                cout << "B" << endl;
                break;
            }
            if (k > dp[n - 2])
            {
                k -= dp[n - 2];
                n--;
            }
            else
            {
                n -= 2;
            }
        }
    }
}