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
        int a[n];
        int b[10005] = {0};

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[a[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (b[a[i]] < b[a[j]])
                {
                    int k = a[i];
                    a[i] = a[j];
                    a[j] = k;
                }
                if (b[a[i]] == b[a[j]])
                {
                    if (a[i] > a[j])
                    {
                        int k = a[i];
                        a[i] = a[j];
                        a[j] = k;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (b[a[i]] != 0)
            {
                cout << a[i] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}