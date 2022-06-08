#include <bits/stdc++.h>
using namespace std;
int n;
int a[30], b[30];
vector<int> o;
vector<string> v;
string temp;
void don()
{
    for (int i = 1; i <= n; i++)
    {
        if (b[i] == 1)
            o.push_back(a[i]);
    }
}
bool check()
{
    if (o.size() < 2)
        return false;
    else
        for (int i = 0; i < o.size() - 1; i++)
        {
            if (o[i] > o[i + 1])
                return false;
        }
    return true;
}
void don2()
{
    if (check())
    {
        temp = "";
        for (int i = 0; i < o.size(); i++)
        {
            temp += (to_string(o[i]) + " ");
        }
        v.push_back(temp);
    }
    o.clear();
}
void in()
{
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}
void sinh(int k)
{
    for (int i = 0; i <= 1; i++)
    {
        b[k] = i;
        if (k == n)
        {
            don();  // don tuwng phần tử trên một xâu
            don2(); // dồn các xâu
        }
        else
            sinh(k + 1);
    }
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sinh(1);
    in();
}