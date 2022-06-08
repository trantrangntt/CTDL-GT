#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n, dem;
int a[1005];
int b[1005];
int c[1005];
int pick[1005] = {};
void in()
{
    for (int i = 1; i <= n; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
}
void sinh(int k)
{
    for (int i = 1; i <= n; i++)
    {
        if (pick[a[i]] == 0)
        {
            pick[a[i]] = 1;
            b[k] = a[i];
            if (k == n)
                in();
            else
                sinh(k + 1);
            pick[a[i]] = 0;
        }
    }
}
int main()
{

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    sinh(1);

    return 0;
}