#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n, a[25], b[25];
int sum = 0;
bool check()
{
    sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (b[i] == 1)
            sum += a[i];
    }
    if (sum % 2 == 0)
        return false;
    return true;
}
void in()
{
    if (check())
    {
        for (int i = 1; i <= n; i++)
            if (b[i] == 1)
                cout << a[i] << " ";
        cout << endl;
    }
}
void sinh(int k)
{
    for (int i = 0; i <= 1; i++)
    {
        b[k] = i;
        if (k == n)
            in();
        else
            sinh(k + 1);
    }
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
        sort(a + 1, a + n + 1, greater<int>());
        sinh(1);
    }

    return 0;
}