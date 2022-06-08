#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int h = n - 1;
    int a[n];
    int b[n][n];
    int dem = 0;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int m = a[0];
    for (int i = 1; i < n; i++)
    {
        // lay ra phan tu o chi số x;
        int x = a[i], pos = i - 1;
        while (pos >= 0 && x < a[pos])
        {
            a[pos + 1] = a[pos];
            pos--;
        }
        a[pos + 1] = x;
        for (int k = 0; k <= dem + 1; k++)
            b[i][k] = a[k];
        dem++;
    }
    for (int i = n - 1; i > 0; i--)
    {
        cout << "Buoc " << h-- << ": ";
        for (int j = 0; j <= dem; j++)
            cout << b[i][j] << " ";
        cout << endl;
        dem--;
    }
    cout << "Buoc 0"
         << ": " << m;
    return 0;
}