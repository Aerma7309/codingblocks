/*
* @Date    : 2020-06-13 22:29:05
* @Author  : Abhimanyu Kumar Maurya (aerma7309@gmail.com)
*/
#include <bits/stdc++.h>
using namespace std;

bool ib = ios_base::sync_with_stdio(0);
bool it = cin.tie(0);

bool canCook(vector<int> &v, int p, int time)
{
    for (auto &r : v)
    {
        int rp = (int)sqrt(((time * 2) / r));
        if (rp > p)
            return true;

        while ((r * rp * (rp + 1)) / 2 <= time)
            rp++;
        if (rp > 0)
            p -= rp - 1;
        if (p <= 0)
            return true;
    }
    return false;
}

signed main()
{
    int p, n;
    cin >> p >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    int lb = 0, ub = INT_MAX, mid, ans = -1;
    while (lb <= ub)
    {
        mid = (lb + ub) / 2;
        if (canCook(v, p, mid))
        {
            ans = mid;
            ub = mid - 1;
        }
        else
            lb = mid + 1;
    }
    cout << ans;
    return 0;
}
