#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int b[n][n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int dem = 0;
        for (int i = 0; i < n; i++)

        {
            int ktra = 0;
            for (int j = 0; j < n - i - 1; j++)
                if (a[j] > a[j + 1])
                {
                    ktra = 1;
                    swap(a[j], a[j + 1]);
                }
            if (ktra == 1)
            {

                for (int k = 0; k < n; k++)
                {
                    b[dem][k] = a[k];
                }
                dem++;
            }
        }
        for (int i = dem - 1; i >= 0; i--)
        {
            cout << "Buoc " << dem-- << ": ";
            for (int j = 0; j < n; j++)
            {
                cout << b[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}