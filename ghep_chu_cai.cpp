#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
char x;
int n;
int A[10] = {};
int pick[10] = {};
int ktra = 0;

int check()
{
    for (int i = 1; i <= n; i++)
    {
        if (i <= n - 1 && i >= 2)
            if ((A[i] == 1 || A[i] == 5) && (A[i - 1] != 1 && A[i - 1] != 5) && (A[i + 1] != 1 && A[i + 1] != 5))
                return 0;
    }
    return 1;
}
void sinh(int k)
{
    for (int i = 1; i <= n; i++)
    {

        if (pick[i] == 0)
        {

            pick[i] = 1;
            A[k] = i;
            if (k == n)
            {
                if (check())
                {
                    for (int j = 1; j <= n; j++)
                        cout << (char)(A[j] + 64);
                    cout << '\n';
                }
            }
            else
            {

                sinh(k + 1);
            }

            pick[i] = 0;
        }
    }
}

int main()
{
    cin >> x;
    n = x - 'A' + 1;
    sinh(1);

    return 0;
}