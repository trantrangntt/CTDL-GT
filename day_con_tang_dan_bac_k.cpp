#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n, k, len;
int a[200], b[200], c[2000], d[2000];
int dem = 0;
bool check()
{
    for (int i = 1; i < k; i++)
    {
        if (b[i] >= b[i + 1])
            return false;
    }
    return true;
}
void in()
{
    if (check())
    {
        // for (int i = 1; i <= k; i++)
        //     cout << b[i] << " ";
        dem++;
        // cout << endl;
    }
}
void sinh(int i)
{
    for (int j = c[b[i - 1]] + 1; j <= len - k + i; j++)
    {
        b[i] = d[j];
        if (i == k)
            in();
        else
            sinh(i + 1);
    }
}
int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    len = 1;
    for (int i = 1; i <= n; i++)
    {
        c[a[i]] = len;
        d[len++] = a[i];
    }
    sinh(1);
    cout << dem;
    return 0;
}