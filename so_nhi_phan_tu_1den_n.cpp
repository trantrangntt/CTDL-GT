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
        queue<string> q;
        int n;
        cin >> n;
        q.push("1");
        while (!q.empty() && n-- > 0)
        {
            string h = q.front();
            cout << q.front() << " ";
            q.pop();
            q.push(h + "0");
            q.push(h + "1");
        }
        cout << endl;
    }

    return 0;
}