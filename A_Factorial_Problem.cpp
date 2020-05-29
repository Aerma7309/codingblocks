/*
* @Date    : 2020-05-28 16:19:38
* @Author  : Abhimanyu Kumar Maurya (aerma7309@gmail.com)
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
bool ib = ios_base::sync_with_stdio(0);
bool it = cin.tie(0);

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        map<int, int> n_factor, k_factor;
        int j = 2, num = k;
        while (j * j <= num)
        {
            while (num % j == 0)
            {
                k_factor[j]++;
                num /= j;
            }
            j++;
        }
        if (num > 1)
            k_factor[num]++;

        for (auto &i : k_factor)
        {
            int j = 0, p = i.first;
            while (p <= n)
            {
                j += n / p;
                p *= i.first;
            }
            n_factor[i.first] = j;
        }

        int res = INT_MAX;
        for (auto &i : k_factor)
            res = min(res, n_factor[i.first] / i.second);
        cout << res << '\n';
    }
    return 0;
}
