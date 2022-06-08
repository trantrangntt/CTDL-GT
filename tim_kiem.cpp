#include <bits/stdc++.h>
using namespace std;
bool bs(int a[], int n, int x)
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == x)
            return true;
        else if (a[m] < x)
        {
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        if (bs(a, n, k))
            cout << "1";
        else
            cout << "-1";
        cout << endl;
    }

    return 0;
}