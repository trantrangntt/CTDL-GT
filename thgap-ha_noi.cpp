#include <bits/stdc++.h>
using namespace std;
void Try(int n, char A, char B, char C)
{
    if (n == 1)
    {
        cout << A << " -> " << C << endl;
        return;
    }
    Try(n - 1, A, C, B);
    Try(1, A, B, C);
    Try(n - 1, B, A, C);
}
int main()
{
    int n;
    char a = 'A', b = 'B', c = 'C';
    cin >> n;
    Try(n, a, b, c);
}