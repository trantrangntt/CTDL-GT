#include <bits/stdc++.h>
using namespace std;

void solve(string n)
{
    int h = n.length() - 1;
    while (h >= 0 && n[h] == '0')
    {
        n[h] = '1';
        h--;
    }
    if (h >= 0)
    {
        n[h] = '0';
    }

    cout << n;
}
int main()
{
    int t;
    cin >> t;
    string n;
    scanf("\n");
    while (t--)
    {

        cin >> n;
        solve(n);
        cout << endl;
    }
    return 0;
}