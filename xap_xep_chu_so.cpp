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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            while (a[i] > 0)
            {
                mp[a[i] % 10]++;
                a[i] /= 10;
            }
        }
        for (auto i : mp)
            cout << i.first << " ";
        cout << endl;
    }
    return 0;
}