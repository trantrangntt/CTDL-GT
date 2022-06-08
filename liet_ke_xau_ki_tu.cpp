#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
char x;
int n;
int k, a[25];
void in()
{
    for (int i = 1; i <= k; i++)
    {
        cout << (char)(a[i] + 64);
    }
    cout << endl;
}
void sinh(int i)
{
    for (int j = a[i - 1]; j <= n; j++)
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
    cin >> x;
    cin >> k;
    a[0] = 1;
    // n = (int)(x);
    n = x - 'A' + 1;
    sinh(1);
    return 0;
}