#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n;
int a[300], b[300];
int sum = 0;
vector<int> v1;
vector<string> v2;
string temp;
bool snt(int l)
{
    if (l < 2)
        return false;
    for (int i = 2; i <= sqrt(l); i++)
        if (l % i == 0)
            return false;
    return true;
}
bool check()
{
    sum = 0;
    for (int i = 0; i < v1.size(); i++)
    {
        sum += v1[i];
    }
    if (snt(sum))
        return true;
    return false;
}
// bool check2()
// {
//     for (int i = 0; i < v1.size() - 1; i++)
//     {
//         if (v1[i] < v1[i + 1])
//             return false;
//     }
//     return true;
// }
void don()
{
    for (int i = 1; i <= n; i++)
    {
        if (b[i] == 1)
            v1.push_back(a[i]);
    }
}
void don2()
{
    if (check())
    {
        for (int i = 0; i < v1.size(); i++)
        {
            cout << v1[i] << " ";
        }
        cout << endl;
    }

    v1.clear();
}
// void in2()
// {
//     for (int i = 1; i <= n; i++)
//         cout << b[i];
//     cout << endl;
// }
// void in()
// {
//     sort(v2.begin(), v2.end());
//     for (int i = 0; i < v2.size(); i++)
//         cout << v2[i] << endl;
//     v2.clear();
// }
void sinh(int k)
{
    for (int i = 0; i <= 1; i++)
    {
        b[k] = i;
        if (k == n)
        {
            don();
            don2();
            // in2();
        }
        else
            sinh(k + 1);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        sort(a + 1, a + n + 1, greater<int>());
        sinh(1);
        // in();
    }

    return 0;
}