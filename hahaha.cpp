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
            int check = 1;
            for (int i = 1; i <= n; i++)
            {
                if (a[1] != 1 || a[n] != 0)
                {
                    check = 0;
                    break;
                }
                if (a[1] == 1 && a[n] == 0)
                    if (a[i] == 1 && a[i + 1] == 1)
                    {
                        check = 0;
                        break;
                    }
            }
            if (check == 1)
            {
                for (int i = 1; i <= n; i++)
                {
                    if (a[i] == 1)
                        cout << char(a[i] + 71);
                    else
                        cout << char(a[i] + 65);
                }
                cout << endl;
            }

            sinh();
        }
        cout << endl;
    }
    return 0;
}