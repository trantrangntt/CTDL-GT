#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> mp;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp.push_back(x);
    }
    int k;
    cin >> k;
    for (int i = 0; i < mp.size(); i++)
    {

        if (mp[i] != k)
            cout << mp[i] << " ";
    }
    return 0;
}
