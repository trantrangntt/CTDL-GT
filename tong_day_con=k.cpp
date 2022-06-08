#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int a[25], b[25];
int n;
int k;
int dem = 0;
int check()
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        if (b[i] == 1)
        {
            s += a[i];
        }
    }
    if (s == k)
        return 1;
    return 0;
}
void in()
{
    if (check())
    {
        for (int i = 0; i < n; i++)
        {
            if (b[i] == 1)
                cout << a[i] << " ";
        }
        cout << endl;
        dem++;
    }
}
void quaylui(int k)
{
    for (int i = 0; i <= 1; i++)
    {
        b[k] = i;
        if (k == n - 1)
        {
            in();
        }
        else
            quaylui(k + 1);
    }
}
int main()
{

    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    quaylui(0);
    cout << dem;

    return 0;
}