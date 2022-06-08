#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a;
        deque<int> dq;
        while (n--)
        {
            cin >> a;
            if (a == 1)
                cout << dq.size() << endl;
            if (a == 2)
                if (dq.size() == 0)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            if (a == 3)
            {
                cin >> a;
                dq.push_back(a);
                continue;
            }
            if (a == 4)
                if (dq.size() > 0)
                    dq.pop_front();
            if (a == 5)
                if (dq.size() > 0)
                    cout << dq.front() << endl;
                else
                    cout << -1 << endl;
            if (a == 6)
                if (dq.size() > 0)
                    cout << dq.back() << endl;
                else
                    cout << -1 << endl;
        }
    }
}