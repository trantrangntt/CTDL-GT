#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    queue<int> q;
    while (t--)
    {
        string s;
        cin >> s;
        if (s == "PUSH")
        {
            int n;
            cin >> n;
            q.push(n);
        }
        if (s == "POP")
        {
            if (q.size() != 0)
                q.pop();
        }
        if (s == "PRINTFRONT")
        {
            if (q.size() == 0)
                cout << "NONE";
            else
                cout << q.front();
            cout << endl;
        }
    }

    return 0;
}