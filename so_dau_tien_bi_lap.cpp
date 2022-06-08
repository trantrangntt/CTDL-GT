#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while ((t--))
    {
        /* code */
        int n, k, ktra = 0;

        cin >> n;
        int a[n], b[n] = {0};
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        for (int i = 0; i < n; i++)
        {

            if (mp[a[i]] != 1)
            {
                k = a[i];
                ktra = 1;
                break;
            }
        }
        if (ktra == 1)
            cout << k;
        else
            cout << "NO";
        cout << endl;
    }

    return 0;
}