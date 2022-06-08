#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> mp;
    int a[10005];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp.push_back(x);
        a[x]++;
    }

    for (int i = 0; i < mp.size(); i++)
    {

        if (a[mp[i]] > 0)
        {
            cout << mp[i] << " ";
            a[mp[i]] = 0;
        }
    }
    return 0;
}
