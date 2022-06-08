#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n;
int a[25];

void in(int k)
{
    for (int i = 1; i <= k; i++)
    {
        if (i == 1)
            cout << "[";
        cout << a[i];
        if (i < k)
            cout << " ";
        else
            cout << "]";
    }
    cout << endl;
}
void sinh(int k)
{
    int b[25];
    for (int j = 1; j <= k; j++)
    {
        b[j] = a[j] + a[j + 1];
    }
    for (int i = 1; i <= k; i++)
    {
        a[i] = b[i];
    }
    in(k);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int k = n;
        in(k);
        while (k--)
        {
            sinh(k);
        }
    }
    return 0;
}