#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;

void in(int a[], int k)
{
    for (int i = 0; i < k; i++)
    {
        if (i == 0)
            cout << "[";
        cout << a[i];
        if (i < k - 1)
            cout
                << " ";
        else
            cout << "] ";
    }
    // cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        int a[n], b[n][n];

        int k = n - 1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[n - 1][i] = a[i];
        }
        for (int i = n - 2; i >= 0; i--)
        {
            for (int j = 0; j < k; j++)
            {
                b[i][j] = b[i + 1][j] + b[i + 1][j + 1];
            }
        }
        for (int i = 0; i < n; i++)
        {
            in(b[i], i + 1);
        }
        cout << endl;
    }
    return 0;
}