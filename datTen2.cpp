#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n, k;
int a[25], b[25];
void in()
{
    for (int i = 1; i <= k; i++)
    {
        cout << char(a[i] + 'A' - 1);
    }
    cout << endl;
}
void sinh(int i)
{
    for (int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        if (i == k)
            in();
        else
            sinh(i + 1);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        sinh(1);
    }

    return 0;
}