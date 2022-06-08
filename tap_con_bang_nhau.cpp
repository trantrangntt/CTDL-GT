#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n;
int sum = 0;
int a[250];
int b[250];
int ktra = 0;
void check()
{
    ktra = 0;
    int sum1 = 0;
    for (int i = 1; i <= n; i++)
    {
        if (b[i] == 1)
        {
            sum1 += a[i];
        }
    }
    if (sum1 == (sum - sum1))
    {
        ktra = 1;
    }
}

void sinh(int k)
{
    for (int i = 0; i <= 1; i++)
    {
        b[k] = i;
        if (k == n)
        {
            check();
        }
        else
            sinh(k + 1);
        if (ktra == 1)
        {
            break;
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
        sum = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum % 2 != 0)
        {
            cout << "NO";
        }
        else
        {
            sinh(1);
            if (ktra == 0)
                cout << "NO";
            else
                cout << "YES";
        }
        cout << endl;
    }
    return 0;
}