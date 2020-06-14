/*
* @Date    : 2020-06-14 12:35:32
* @Author  : Abhimanyu Kumar Maurya (aerma7309@gmail.com)
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long

bool ib = ios_base::sync_with_stdio(0);
bool it = cin.tie(0);

bool canPaint(vector<int> &boards, int k, int time)
{

    int sum = 0, p = 1;
    for (auto &i : boards)
    {
        if (sum + i <= time)
            sum += i;
        else if (i <= time)
        {
            p++;
            sum = i;
        }
        else
            return false;
        if (p > k)
            return false;
    }
    return true;
}

signed main()
{
    int n, k, ub = 0, lb = 0;
    cin >> k >> n;
    vector<int> boards(n);
    for (auto &i : boards)
    {
        cin >> i;
        ub += i;
        lb = max(lb, i);
    }

    int mid, ans = -1;
    while (lb <= ub)
    {
        mid = (lb + ub) / 2;
        if (canPaint(boards, k, mid))
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
