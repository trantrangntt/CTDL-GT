#include <bits/stdc++.h>
using namespace std;
int k;
int cmp(int a, int b)
{

    if (abs(a - k) < abs(b - k))
        return true;
    else
        return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        stable_sort(a, a + n, cmp);
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}