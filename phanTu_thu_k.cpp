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
        int m, n, k;
        cin >> m >> n >> k;
        map<int, int> mp;

        vector<int> s;
        for (int i = 0; i < m + n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        for (auto i : mp)
        {
            for (int j = 0; j < i.second; j++)
                s.push_back(i.first);
        }
        cout << s[k - 1] << endl;
    }

    return 0;
}