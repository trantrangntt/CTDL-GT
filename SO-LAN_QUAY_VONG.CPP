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
        int dem = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i < n; i++)
        {
            if (a[i - 1] > a[i])
            {
                dem = i;
                break;
            }
        }

        cout << dem << endl;
    }
    return 0;
}