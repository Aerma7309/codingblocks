/*
* @Date    : 2020-06-16 00:15:13
* @Author  : Abhimanyu Kumar Maurya (aerma7309@gmail.com)
*/
#include <bits/stdc++.h>
using namespace std;

bool ib = ios_base::sync_with_stdio(0);
bool it = cin.tie(0);
#define int long long

signed main()
{
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    int lb = 0, ub = n, mid, ans = -1;
    while (lb <= ub)
    {
        mid = (lb + ub) / 2;
        if ((m + (n - mid) * y) >= (mid * x))
        {
            ans = mid;
            lb = mid + 1;
        }
        else
            ub = mid - 1;
    }
    cout << ans;
    return 0;
}
