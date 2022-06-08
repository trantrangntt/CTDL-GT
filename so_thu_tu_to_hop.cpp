#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n, k;
int a[25];
int b[25];
int dem = 0;
int ktra = 0;
bool check()
{
    ktra = 0;
    for (int i = 1; i <= k; i++)
    {
        if (a[i] != b[i])
            ktra = 1;
    }
    if (ktra == 1)
        return false;
    return true;
}
void in()
{
    dem++;
    if (check())
        cout << dem << endl;
    // for (int i = 1; i <= k; i++)
    //     cout << b[i] << " ";
    // cout << endl;
}
void sinh(int i)
{
    for (int j = b[i - 1] + 1; j <= n - k + i; j++)
    {
        b[i] = j;
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
        dem = 0;
        ktra = 0;
        cin >> n >> k;
        for (int i = 1; i <= k; i++)
            cin >> a[i];
        sinh(1);
    }

    return 0;
}