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
        map<int, int> mp;
        for (int i = 0; i < n + k; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        for (auto i : mp)
            cout << i.first << " ";
        cout << endl;
        for (auto i : mp)
            if (i.second != 1)
                cout
                    << i.first << " ";
        cout << endl;
    }
    return 0;
}