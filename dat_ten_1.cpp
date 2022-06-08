#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n, k;
string b[50];
string a[50];
int c[50];
void in()
{
    for (int i = 1; i <= k; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
}
void sinh(int i)
{
    for (int j = c[i - 1] + 1; j <= n - k + i; j++)
    {
        c[i] = j;
        b[i] = a[j];
        if (i == k)
            in();
        else
            sinh(i + 1);
    }
}
int main()
{

    cin >> n >> k;
    cin.ignore();
    string s;
    set<string> st;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        st.insert(s);
    }
    int j = 1;
    for (auto i : st)
    {
        a[j++] = i; // luwu mang xau trong set
    }
    n = st.size();
    sinh(1);
    return 0;
}