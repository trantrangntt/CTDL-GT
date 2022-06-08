#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        queue<string> q;
        stack<string> s;
        string h;
        q.push("6");
        q.push("8");
        while (h.length() <= n)
        {
            h = q.front();
            if (h.length() > n)
                break;
            s.push(h);
            q.pop();
            q.push(h + "6");
            q.push(h + "8");
        }
        while (!s.empty())
        {
            cout << s.top() << " ";
            s.pop();
        }
        cout << endl;
    }
    return 0;
}