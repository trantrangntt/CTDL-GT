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
        int k;

        cin >> n >> k;
        oke = 1;
        ktao();
        while (oke)
        {
            int dem = 0;
            for (int i = 0; i <= n; i++)
            {
                if (a[i] == 1)
                    dem++;
            }
            int check = 0;
            if (dem == k)
            {
                for (int i = 1; i <= n; i++)
                {
                    cout << a[i];
                    check = 1;
                }
                if (check == 1)
                    cout << endl;
            }
            sinh();
        }
        cout << endl;
    }
    return 0;
}