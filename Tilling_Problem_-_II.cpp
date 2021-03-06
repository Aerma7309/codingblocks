/*
* @Date    : 2020-06-09 09:31:20
* @Author  : Abhimanyu Kumar Maurya (aerma7309@gmail.com)
*/
#include <bits/stdc++.h>
using namespace std;

bool ib = ios_base::sync_with_stdio(0);
bool it = cin.tie(0);
#define int long long
const int MOD = 1e9 + 7;

int countWays(int n, int m, vector<int> &dp)
{
    if (n < m)
        return 1;
    if (dp[n] != -1)
        return dp[n];
    return dp[n] = (((countWays(n - 1, m, dp) % MOD) + (countWays(n - m, m, dp) % MOD)) % MOD);
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> past(n + 1, -1);
        cout << countWays(n, m, past) << '\n';
    }
    return 0;
}
