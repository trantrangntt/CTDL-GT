#include <bits/stdc++.h>
using namespace std;
long long sum = 1000000007;
long long F(int n)
{
    return (long long)((pow((1.0 + sqrt(5.0)), n) - pow((1.0 - sqrt(5.0)), n)) / (pow(2.0, n) * sqrt(5.0))) % sum;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        cout << F(n) << endl;
    }

    return 0;
}