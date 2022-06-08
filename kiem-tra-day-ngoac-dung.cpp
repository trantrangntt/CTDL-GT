#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
bool check(char close, char open)
{
    if ((close == ')' && open == '(') || (close == ']' && open == '[') || (close == '}' && open == '{'))
        return true;
    return false;
}
void solve(string s)
{
    string a;
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] == '(' || s[i] == '[' || s[i] == '{')) // neeus ngoac mo dua vafo string al
            a.push_back(s[i]);
        else
        {
            if (check(s[i], a[a.size() - 1]))
                a.pop_back();
            else
                a.push_back(s[i]);
        }
    }
    if (a.empty())
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        solve(s);
    }
    return 0;
}