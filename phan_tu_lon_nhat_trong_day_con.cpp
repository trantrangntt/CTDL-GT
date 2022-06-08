#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int main()
{
    // sử dụng stl hàm max_element();
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n - k + 1; i++)
        {
            cout << *std::max_element(a + i, a + i + k) << " ";
        }
        cout << endl;
    }
    return 0;
}