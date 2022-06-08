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
        int n, l;
        cin >> n;
        int a[n];
        int s1 = 0, s2 = 0;
        int check = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i > 0)
                s2 += a[i];
        }
        if (s1 == s2)
            cout << "1" << endl;

        else
        {
            for (int i = 1; i < n; i++)
            {
                s1 += a[i - 1];
                s2 -= a[i];
                if (s1 == s2)
                {
                    check = 1;
                    l = i;
                    break;
                }
            }
            if (check)
                cout << l + 1 << endl;
            else
                cout << "-1" << endl;
        }
    }
    return 0;
}