/*
* @Date    : 2020-06-14 22:29:16
* @Author  : Abhimanyu Kumar Maurya (aerma7309@gmail.com)
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
bool ib = ios_base::sync_with_stdio(0);
bool it = cin.tie(0);

bool isPossible(vector<int> &v, int k, int maxPages)
{
    int s = 1, pageAssigned = 0;
    for (auto &pages : v)
    {
        if (pageAssigned + pages <= maxPages)
            pageAssigned += pages;
        else if (pages <= maxPages)
        {
            s++;
            pageAssigned = pages;
        }
        else
            return false;
        if (s > k)
            return false;
    }
    return true;
}

signed main()
{
    int n, k, lb = 0, ub = 0, mid, ans = -1;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
        ub += i;
    }
    while (lb <= ub)
    {
        mid = (lb + ub) / 2;
        if (isPossible(v, k, mid))
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
