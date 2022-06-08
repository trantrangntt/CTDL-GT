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
        stack<int> s;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int b[n];
        // 10 2 4 5 25
        for (int i = n - 1; i >= 0; i--)
        {
            while (!s.empty() && a[i] >= s.top())
            {
                s.pop();
            }
            if (s.size() == 0)
                b[i] = -1;
            else
                b[i] = s.top();
            s.push(a[i]);
        }
        for (int i = 0; i < n; i++)
            cout << b[i] << " ";
        cout << endl;
    }
    return 0;
}