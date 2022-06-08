#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int a[(t / 2) + 1];
    int b[(t / 2) + 1];
    int k = 0, h = 0;
    for (int i = 1; i <= t; i++)
    {
        int x;
        cin >> x;
        if (i % 2 != 0)
        {
            a[h] = x;
            h++;
        }
        else
        {
            b[k] = x;
            k++;
        }
    }
    sort(a, a + h);
    sort(b, b + k);
    for (int i = 0, j = k - 1; i < h, j >= 0; j--, i++)
    {
        cout << a[i] << " " << b[j] << " ";
    }
    if (t % 2 != 0)
        cout << a[h - 1];

    return 0;
}