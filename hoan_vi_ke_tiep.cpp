#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n;
int a[1005];
int ktra = 0;
void sinh()
{
    for (int i = n - 1; i >= 1; i--)
    {
        if (a[i] < a[i + 1])
        {
            ktra = 1;
            for (int j = n; j >= i + 1; j--)
            {
                if (a[j] > a[i])
                {
                    swap(a[j], a[i]);
                    sort(a + i + 1, a + n + 1);
                    break;
                }
            }
            break;
        }
    }
}
void in()
{
    if (ktra == 1)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << a[i] << " ";
        }
    }
    else
        for (int i = 1; i <= n; i++)
            cout << i << " ";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ktra = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        sinh();
        in();
        cout << endl;
    }
    return 0;
}
// hàm hoán vị kế tiếp trong c++ next_permutation(a+1,a+n+1)