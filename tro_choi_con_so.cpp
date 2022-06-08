#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n;
int pick[10] = {};
int a[25];
bool check()
{
    for (int i = 1; i < n; i++)
    {
        if (a[i] + 1 == a[i + 1] || a[i] == a[i + 1] + 1)
            return false;
    }
    return true;
}
void in()
{
    if (check())
    {
        for (int i = 1; i <= n; i++)
            cout << a[i];
        cout << endl;
    }
}
void sinh(int k)
{
    for (int i = 1; i <= n; i++)
    {
        if (pick[i] == 0)
        {
            pick[i] = 1;
            a[k] = i;
            if (k == n)
                in();
            else
                sinh(k + 1);
            pick[i] = 0;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        sinh(1);
    }
    return 0;
}