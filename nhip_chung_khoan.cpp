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
        int a[n], l[n];
        stack<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            while (!s.empty() && a[i] >= a[s.top()])
            {
                s.pop();
            }
            if (s.empty())
                l[i] = 0;
            else
            {
                l[i] = s.top() + 1;
            }
            s.push(i);
        }
        for (int i = 0; i < n; i++)
            cout << i - l[i] + 1 << " ";
        cout << endl;
    }
    return 0;
}