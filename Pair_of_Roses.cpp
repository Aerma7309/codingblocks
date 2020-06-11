/*
* @Date    : 2020-06-11 23:30:34
* @Author  : Abhimanyu Kumar Maurya (aerma7309@gmail.com)
*/
#include <bits/stdc++.h>
using namespace std;

bool ib = ios_base::sync_with_stdio(0);
bool it = cin.tie(0);

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, ans1, ans2, diff = INT_MAX;
        cin >> n;
        vector<int> v(n);
        for (auto &i : v)
            cin >> i;
        cin >> k;
        set<int> s;
        for (auto &i : v)
        {
            if (s.find(k - i) != s.end() and abs(k - 2 * i) < diff)
            {
                ans1 = i;
                ans2 = k - i;
                diff = abs(k - 2 * i);
            }
            s.insert(i);
        }
        cout << "Deepak should buy roses whose prices are " << min(ans1, ans2) << " and " << max(ans1, ans2) << ".\n";
    }

    return 0;
}
