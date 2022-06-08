#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int dao(int a)
{
    int n = 0;
    while (a > 0)
    {
        int x = a % 10;
        n = n * 10 + x;
        a /= 10;
    }
    return n;
}
int Max(int a)
{
    int n = 0;
    while (a > 0)
    {
        int x = a % 10;
        if (x == 5)
            x = 6;
        n = n * 10 + x;
        a /= 10;
    }
    return dao(n);
}
int Min(int a)
{
    int n = 0;
    while (a > 0)
    {
        int x = a % 10;
        if (x == 6)
            x = 5;
        n = n * 10 + x;
        a /= 10;
    }
    return dao(n);
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << Min(a) + Min(b) << " " << Max(a) + Max(b);

    return 0;
}