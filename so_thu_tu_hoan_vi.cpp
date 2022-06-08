#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n, k;
int a[25], b[25];
int pick[25] = {};
int ktra = 0;
int dem = 0;
bool check()
{
    ktra = 0;
    for (int i = 1; i <= n; i++)
    {
        if (b[i] != a[i])
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
        cout << dem;
    // for (int i = 1; i <= n; i++)
    //     cout << b[i] << " ";
    // cout << endl;
}
void sinh(int k)
{
    for (int i = 1; i <= n; i++)
    {
        {
            if (pick[i] == 0)
            {
                pick[i] = 1;
                b[k] = i;
                if (k == n)
                {
                    in();
                }
                else
                    sinh(k + 1);
                pick[i] = 0;
            }
        }
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
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        sinh(1);
        cout << endl;
    }
    return 0;
}