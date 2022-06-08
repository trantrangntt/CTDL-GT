#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
char a[1005], b[1005];
int pick[25] = {};
string s;
int h;
void in()
{
    for (int i = 0; i < h; i++)
    {
        cout << b[i];
    }
    cout << " ";
}
void sinh(int k)
{
    for (int i = 0; i < h; i++)
    {
        if (pick[a[i]] == 0)
        {
            pick[a[i]] = 1;
            b[k] = a[i];
            if (k == h - 1)
                in();
            else
                sinh(k + 1);
            pick[a[i]] = 0;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        cin >> s;
        h = s.length();
        for (int i = 0; i < s.length(); i++)
        {
            a[i] = s[i];
            pick[a[i]] = 0;
        }
        sinh(0);

        cout << endl;
    }

    return 0;
}