#include <bits/stdc++.h>
using namespace std;
int nt(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int k;
        int ktra=0;
        for (int i=2; i<=sqrt(n); i++){
            if()
        }
        if (ktra == 1)
            cout << k << " " << n - k;
        else
            cout << "-1";
        cout << endl;
    }
    return 0;
}