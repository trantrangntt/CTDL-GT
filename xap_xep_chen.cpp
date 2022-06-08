#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int dem = 0;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "Buoc 0: " << a[0] << endl;
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
        cout << "Buoc " << dem + 1 << ": ";
        for (int k = 0; k <= dem + 1; k++)
            cout << a[k] << " ";
        cout << endl;
        dem++;
    }
    return 0;
}