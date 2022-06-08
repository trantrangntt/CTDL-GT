#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n, k, ktra = 0;
int a[1005];
void sinh()
{
    for (int i = k; i >= 1; i--)
    {
        if (a[i] < n - k + i)
        {
            ktra = 1;
            a[i]++;
            for (int j = i; j <= k - 1; j++)
            {
                a[j + 1] = a[j] + 1;
            }
            break;
        }
    }
}
void in()
{
    if (ktra == 1)
        for (int i = 1; i <= k; i++)
        {
            cout << a[i] << " ";
        }
    else
        for (int i = 1; i <= k; i++)
            cout << i << " ";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ktra = 0;
        cin >> n >> k;
        for (int i = 1; i <= k; i++)
        {
            cin >> a[i];
        }
        sinh();
        in();
        cout << endl;
    }

    return 0;
}