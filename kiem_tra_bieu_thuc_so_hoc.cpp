#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        cin >> s;
        stack<char> st;
        int check = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != ')')
                st.push(s[i]);
            else
            {
                check = 0;
                // if (st.top() != '(')
                while (!st.empty())
                {
                    if (st.top() != '(')
                    {
                        if (st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/')
                        {
                            check = 1;
                        }
                        st.pop();
                    }

                    else
                    {
                        st.pop();
                        break;
                    }
                }
                if (check == 0)
                {
                    cout << "Yes";
                    break;
                }
            }
        }
        if (check == 1)
            cout << "No";
        cout << endl;
    }
    return 0;
}
