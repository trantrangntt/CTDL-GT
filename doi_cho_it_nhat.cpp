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
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int t = 0;
        for (int i = 0; i < n; i++)
        {
            int min = i;
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] < a[min])
                {
                    min = j;
                }
            }
            if (a[min] < a[i])
            {
                swap(a[i], a[min]);
                t++;
            }
        }
        cout << t << endl;
    }
    return 0;
}