#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int b[n][n];

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        swap(a[i], a[min]);
        {
            for (int k = 0; k < n; k++)
            {
                b[i][k] = a[k];
            }
        }
    }
    int dem = n - 1;
    for (int i = n - 2; i >= 0; i--)
    {
        cout << "Buoc " << dem-- << ": ";
        for (int j = 0; j < n; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}