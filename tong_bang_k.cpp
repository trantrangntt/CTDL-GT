#include <bits/stdc++.h>
using namespace std;
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
        sort(a, a + n);
        int dem = 0;
        for (int i = 0; i < n; i++)
        {

            auto it = lower_bound(a + i, a + n, k - a[i]);
            if (*it == k - a[i])
                dem++;
        }
        cout << dem << endl;
    }
    return 0;
}