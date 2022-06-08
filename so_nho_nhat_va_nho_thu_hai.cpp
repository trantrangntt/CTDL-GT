#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, min, ktra = 1;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        min = a[0];
        for (int i = 0; i < n; i++)
        {
            if (a[i] > min)
            {
                min = a[i];
                ktra = 0;
                break;
            }
        }
        if (ktra == 0)
            cout << a[0] << " " << min;
        else
            cout << "-1";
        cout << endl;
    }

    return 0;
}