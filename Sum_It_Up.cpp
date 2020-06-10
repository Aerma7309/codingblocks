/*
* @Date    : 2020-06-10 10:19:54
* @Author  : Abhimanyu Kumar Maurya (aerma7309@gmail.com)
*/
#include <bits/stdc++.h>
using namespace std;

bool ib = ios_base::sync_with_stdio(0);
bool it = cin.tie(0);

signed main()
{
    int n, k;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    cin >> k;
    set<vector<int>> sv;
    for (int i = 1; i < (1 << n); i++)
    {
        int sum = 0, bit = 0, num = i;
        vector<int> t;
        while (num > 0)
        {
            if (num & 1)
            {
                sum += v[bit];
                t.emplace_back(v[bit]);
            }
            num >>= 1;
            bit++;
        }
        sort(t.begin(), t.end());
        if (sum == k)
            sv.emplace(t);
    }
    for (auto &i : sv)
    {
        for (auto &j : i)
            cout << j << ' ';
        cout << '\n';
    }

    return 0;
}
