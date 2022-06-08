#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n, k;
map<int, int> mp;
int dem = 0;
int a[50];
int ktra = 0;
void sinh()
{
    for (int i = k; i >= 1; i--)
    {
        if (a[i] < n - k + i)
        {
            ktra = 1;
            a[i]++;
            for (int j = i; j < k; j++)
            {
                a[j + 1] = a[j] + 1;
            }
            break;
        }
    }
    for (int i = 1; i <= k; i++)
    {
        mp[a[i]]++;
    }
    // for (auto i : mp)
    // {
    //     cout << i.first << " " << i.second;
    //     cout << endl;
    // }
}
void in()
{
    dem = 0;
    if (ktra == 1)
    {
        for (auto i : mp)
        {
            if (i.second == 2)
            {
                dem++;
            }
        }
        cout << k - dem;
    }
    else
        cout << k;
    mp.clear();
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ktra = 0;
        cin >> n;
        cin >> k;
        for (int i = 1; i <= k; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        sinh();
        in();
        cout << endl;
    }

    return 0;
}