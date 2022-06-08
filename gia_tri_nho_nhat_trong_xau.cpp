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
        int k;
        cin >> k;
        cin.ignore();
        string s;
        cin >> s;
        int h = s.length();
        map<char, int> mp;
        for (int i = 0; i < h; i++)
        {
            mp[s[i]]++;
        }
        queue<int> q;
        int max = 0;
        for (auto i : mp)
        {
            if (i.second > max)
                max = i.second;
            q.push(i.second);
        }
        ll sum = 0;
        int dem = 0;
        while (!q.empty())
        {
            
        }
        
    }

    return 0;
}