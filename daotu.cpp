#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        stack<string> s;
        string h, temp;
        getline(cin, h);
        stringstream ss(h);
        while (ss >> temp)
        {
            s.push(temp);
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
