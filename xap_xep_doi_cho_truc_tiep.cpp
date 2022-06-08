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
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                swap(a[i], a[j]);
                ktra = 1;
            }
        }
        if (ktra == 1)
        {
            cout << "Buoc " << dem++ << ": ";
            for (int k = 0; k < n; k++)
            {
                cout << a[k] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}