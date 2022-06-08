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
        int m, n, p;
        cin >> m >> n >> p;
        long long a[m], b[n], c[p];
        map<long long, int> x, y, z, l;
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
            l[a[i]] = 1;
            x[a[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            y[b[i]]++;
            if (l[b[i]] == 1)
                l[b[i]] = 2;
        }
        for (int i = 0; i < p; i++)
        {
            cin >> c[i];
            z[c[i]]++;
            if (l[c[i]] == 2)
                l[c[i]]++;
        }
        int check = 0;

        for (int i = 0; i < m; i++)
        {
            if (l[a[i]] >= 3)
            {
                int Min = -1;
                check = 1;
                Min = min(x[a[i]], min(y[a[i]], z[a[i]]));
                for (int k = 0; k < Min; k++)
                    cout << a[i] << " ";
                l[a[i]] = 0;
            }
        }
        if (check == 0)
            cout << "NO";
        cout << endl;
    }
    return 0;
}