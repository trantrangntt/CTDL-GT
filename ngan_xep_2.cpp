#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
stack<int> a;
string s;
int n;
int t;
void show()
{
    if (a.size() == 0)
        cout << "NONE";
    else
    {
        cout << a.top();
    }
    cout << endl;
}
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> s;
        if (s == "PUSH")
        {
            cin >> n;
            a.push(n);
        }
        else if (s == "POP")
        {
            if (a.size() != 0)
                a.pop();
        }
        else if (s == "PRINT")
        {
            show();
        }
    }
    return 0;
}