#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n;
int k;
int a[25], b[25];
void in()
{
    for (int i = 1; i <= k; i++)
        cout << a[i];
    cout << " ";
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
        cout << endl;
    }
    return 0;
}