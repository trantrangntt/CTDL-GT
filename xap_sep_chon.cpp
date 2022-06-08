#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int dem = 1;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        int ktra = 0;

        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                ktra = 1;
                min = j;
            }
        }
        swap(a[i], a[min]);
        {
            cout << "Buoc " << dem << ": ";
            for (int k = 0; k < n; k++)
            {
                cout << a[k] << " ";
            }
            cout << endl;
            dem++;
        }
    }
    return 0;
}