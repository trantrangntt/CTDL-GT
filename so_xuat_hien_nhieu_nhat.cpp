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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        int max = -1, k;
        for (auto i : mp)
        {
            if (i.second > max)
            {
                max = i.second;
                k = i.first;
            }
        }
        if (max > n / 2)
            cout << k;
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}