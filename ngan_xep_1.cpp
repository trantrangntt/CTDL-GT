#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    vector<int> a;
    string s;
    int n;
    while (cin >> s)
    {

        if (s == "push")
        {
            cin >> n;
            a.push_back(n);
        }
        if (s == "pop")
            a.pop_back();
        if (s == "show")
        {
            //     cout << a[0] << " ";
            if (a.size() == 0)
                cout << "empty";
            else
            {
                for (int i = 0; i < a.size(); i++)
                    cout << a[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
