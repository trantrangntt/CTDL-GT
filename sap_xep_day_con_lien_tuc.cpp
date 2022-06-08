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
        int n;
        cin >> n;
        int a[n];
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b + n);
        int l = 0, r = n - 1;
        while (a[l] == b[l])
            l++;
        while (b[r] == a[r])
            r--;
        if (r > l)
            cout << l + 1 << " " << r + 1
                 << endl;
    }
    return 0;
}