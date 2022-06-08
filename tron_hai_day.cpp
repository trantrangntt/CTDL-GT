#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a, b;
        cin >> a >> b;
        int m[a + b];
        for (int i = 0; i < a + b; i++)
            cin >> m[i];
        sort(m, m + a + b);
        for (int i : m)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}