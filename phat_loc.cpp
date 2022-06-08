#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n;
int a[25];
int oke = 1;
void ktao()
{
    for (int i = 1; i <= n; i++)
        a[i] = 0;
}
void sinh()
{
    int i = n;
    while (a[i] == 1 && i > 0)
    {
        a[i] = 0;
        i--;
    }
    if (i == 0)
        oke = 0;
    else
        a[i] = 1;
}
bool check()
{
    if (a[1] == 0)
        return false;
    if (a[n] == 1)
        return false;
    for (int i = 1; i < n; i++)
    {
        if (a[i] == 1 && a[i + 1] == 1)
            return false;
    }
    for (int i = 1; i <= n - 3; i++)
    {
        if (a[i] == 0 && a[i + 1] == 0 && a[i + 2] == 0 && a[i + 3] == 0)
            return false;
    }
    return true;
}
void in()
{
    while (oke == 1)
    {
        if (check())
        {
            for (int i = 1; i <= n; i++)
            {
                if (a[i] == 1)
                    cout << 8;
                else
                    cout << 6;
            }
            cout << endl;
        }
        sinh();
    }
}
int main()
{
    cin >> n;
    ktao();
    in();
    return 0;
}