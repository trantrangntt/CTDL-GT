#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        for (int i = 0; i <= n / 2; i++)
        {
            if (n % 2 == 0 && i != n / 2)
                cout << a[n - i - 1] << " " << a[i] << " ";
            if (n % 2 != 0)
            {
                if (i != n / 2)
                    cout << a[n - i - 1] << " " << a[i] << " ";
                else
                    cout << a[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}