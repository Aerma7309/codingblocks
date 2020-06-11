/*
* @Date    : 2020-06-11 21:51:00
* @Author  : Abhimanyu Kumar Maurya (aerma7309@gmail.com)
*/
#include <bits/stdc++.h>
using namespace std;

bool ib = ios_base::sync_with_stdio(0);
bool it = cin.tie(0);

#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &i : v)
            cin >> i;
        int ans, curr;
        ans = curr = INT_MIN;
        for (auto &i : v)
        {
            curr = max({curr + i, i, 0LL});
            ans = max(ans, curr);
        }
        cout << ans << '\n';
    }
    return 0;
}