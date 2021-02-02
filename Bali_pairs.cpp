/*
*    @Date    : 2020-11-11 18:29:35
*    @Author  : aerma7309 
*/

#include <bits/stdc++.h>

using namespace std;
int FastIO = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

const int mod = 1e9 + 7;
#define int long long
int pow2mod(int p)
{
    int n = 1;
    for (int i = 0; i < p; i++)
    {
        n <<= 1;
        n %= mod;
    }
    return n;
}

signed main()
{
    int n;
    cin >> n;
    // int oo = 0, oe = 0, ee = 0;
    // for (int i = 0, a, b; i < n; i++)
    // {
    //     cin >> a >> b;
    //     if (a & 1 and b & 1)
    //         oo++;
    //     else if (not(a & 1) and not(b & 1))
    //         ee++;
    //     else
    //         oe++;
    // }
    int dp[n][2], v[n][2];
    memset(dp, 0, sizeof dp);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i][0] >> v[i][1];
    }
    if (v[0][0] & 1)
        dp[0][1]++;
    else
        dp[0][0]++;
    if (v[0][1] & 1)
        dp[0][1]++;
    else
        dp[0][0]++;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            dp[i][v[i][j] & 1] += dp[i - 1][(v[i][j] + j)%2];
            dp[i][v[i][j] & 1] %= mod;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
