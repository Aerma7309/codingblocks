/*
* @Date    : 2020-06-16 12:30:34
* @Author  : Abhimanyu Kumar Maurya (aerma7309@gmail.com)
*/
#include <bits/stdc++.h>
using namespace std;

bool ib = ios_base::sync_with_stdio(0);
bool it = cin.tie(0);

signed main()
{
    int n, q, t;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    cin >> q;
    while (q--)
    {
        cin >> t;
        int lb = lower_bound(v.begin(), v.end(), t) - v.begin();
        int ub = upper_bound(v.begin(), v.end(), t) - v.begin();
        if (v[lb] == t)
            cout << lb << " " << ub - 1 << '\n';
        else
            cout << "-1 -1\n";
    }

    return 0;
}
