#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n;
int a[25];
int pick[10] = {};
void in()
{
    for (int i = 1; i <= n; i++)
    {
        cout << a[i];
    }
    cout << " ";
}
void sinh(int k)
{

    for (int i = 1; i <= n; i++)
    {
        if (pick[i] == 0)
        {
            pick[i] = 1;
            a[k] = i;
            if (k == n)
                in();
            else
                sinh(k + 1);
            pick[i] = 0;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        sinh(1);
        cout << endl;
    }
    return 0;
}