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
bool check()
{
    for (int i = 1; i <= n / 2; i++)
    {
        if (a[i] != a[n - i + 1])
            return false;
    }
    return true;
}
int main()
{
    // Thuật toán sinh kế tiếp
    cin >> n;
    oke = 1;
    ktao();
    while (oke)
    {
        if (check())
        {
            for (int i = 1; i <= n; i++)
                cout << a[i] << "   ";
            cout << endl;
        }
        sinh();
    }
    return 0;
}