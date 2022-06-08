#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int a[25], b[25];
int n;
int k;
int ktra = 0;
int check()
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        if (b[i] == 1)
        {
            s += a[i];
        }
    }
    if (s == k)
        return 1;
    return 0;
}
void in()
{
    if (check())
    {
        ktra = 1;
        int vt;
        for (int i = 0; i < n; i++)
        {
            if (b[i] == 1)
            {
                vt = i;
            }
        }

        cout << "[";
        for (int i = 0; i < n; i++)
        {
            if (b[i] == 1 && i != vt)
                cout << a[i] << " ";
            if (b[i] == 1 && i == vt)
                cout << a[i];
        }
        cout << "]";
        cout << " ";
    }
}
void quaylui(int k)
{
    for (int i = 1; i >= 0; i--)
    {
        b[k] = i;
        if (k == n - 1)
            in();
        else
            quaylui(k + 1);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ktra = 0;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        quaylui(0);
        if (ktra == 0)
            cout << "-1";
        cout << endl;
    }
    return 0;
}