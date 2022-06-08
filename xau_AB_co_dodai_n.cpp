#include <bits/stdc++.h>
using namespace std;
int n, a[100], oke;

void ktao()
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = 0;
    }
}

void sinh()
{
    int i = n;
    while (i >= 1 && a[i] == 1)
    {
        a[i] = 0;
        --i;
    }
    if (i == 0)
        oke = 0; // đay là cấu hình cuối cùng
    else
        a[i] = 1; // găp 0 đầu tiên chuyên 1
}

int main()
{
    // Thuật toán sinh kế tiếp
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        oke = 1;
        ktao();
        while (oke)
        {

            for (int i = 1; i <= n; i++)
                cout << char(a[i] + 65);
            cout << " ";
            sinh();
        }
        cout << endl;
    }
    return 0;
}