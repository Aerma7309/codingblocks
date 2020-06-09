/*
* @Date    : 2020-06-09 11:05:41
* @Author  : Abhimanyu Kumar Maurya (aerma7309@gmail.com)
*/
#include <bits/stdc++.h>
using namespace std;

bool ib = ios_base::sync_with_stdio(0);
bool it = cin.tie(0);
#define int long long

int count(int n, vector<int> &dp)
{
    if (n == 2)
        return 3;
    if (n == 1)
        return 2;
    if (dp[n] != -1)
        return dp[n];
    return dp[n] = (count(n - 1, dp) + count(n - 2, dp));
}

signed main()
{
    int t;
    cin >> t;
    vector<int> past(91, -1);
    while (t--)
    {
        int n;
        cin >> n;
        cout << count(n, past) << '\n';
    }
    return 0;
}
