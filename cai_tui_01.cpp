#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, W;
        cin >> n >> W;
        int dp[n + 1][W + 1];
        int weight[n + 1] = {0};
        int value[n + 1] = {0};
        memset(dp, 0, sizeof(dp));
        for (int i = 1; i <= n; i++)
        {
            cin >> weight[i];
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> value[i];
        }
        for (int i = 0; i <= n; i++)
        {
            for (int w = 0; w <= W; w++)
            {
                if (i == 0 || w == 0)
                {
                    dp[i][w] = 0;
                }
                else if (w < weight[i])
                {
                    dp[i][w] = dp[i - 1][w];
                }
                else
                {
                    dp[i][w] = max(dp[i - 1][w], value[i] + dp[i - 1][w - weight[i]]);
                }
            }
        }
        cout << dp[n][W] << endl;
    }
}