#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;

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
        int l = 0, r = n - 1;
        int check = 0;
        int h;
        while (l <= r)
        {
            int m = (l + r) / 2;
            if (a[m] == k)
            {
                h = m;
                check = 1;
                break;
            }
            else if (a[m] < k)
            {
                l = m + 1;
            }
            else
            {
                r = m - 1;
            }
        }
        if (check == 1)
            cout << h + 1;
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}