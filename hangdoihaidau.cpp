#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    deque<int> q;
    while (t--)
    {
        string s;
        cin >> s;
        if (s == "PUSHBACK")
        {
            int n;
            cin >> n;
            q.push_back(n);
        }
        if (s == "PUSHFRONT") // them ddaauf
        {
            int n;
            cin >> n;
            q.push_front(n);
        }
        if (s == "POPBACK" && !q.empty())
        {

            q.pop_back();
        }
        if (s == "POPFRONT" && !q.empty())
        {

            q.pop_front();
        }
        if (s == "PRINTBACK")
        {
            if (q.size() == 0)
                cout << "NONE" << endl;
            else
                cout << q.back() << endl;
        }
        if (s == "PRINTFRONT")
        {
            if (q.size() == 0)
                cout << "NONE" << endl;
            else
                cout << q.front() << endl;
        }
    }
    return 0;
}
