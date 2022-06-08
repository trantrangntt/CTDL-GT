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
        int dem = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            for (int j = 0; j < i; j++)
            {
                if (a[i] + a[j] == k)
                    dem++;
            }
        }
        cout << dem << endl;
    }
    return 0;
}