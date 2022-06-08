#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int dem = 1;
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
            cout << "Buoc " << dem++ << ": ";
            for (int k = 0; k < n; k++)
                cout << a[k] << " ";
            cout << endl;
        }
    }
    return 0;
}