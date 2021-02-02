/*
* @Date    : 2020-04-24 07:27:48
* @Author  : Abhimanyu Kumar Maurya (aerma7309@gmail.com)
*/
#include <bits/stdc++.h>
using namespace std;

bool ib = ios_base::sync_with_stdio(0);
bool it = cin.tie(0);

bool check(string s)
{
    bool flag = true;
    for (auto &i : s)
    {
        if (i != 'A' and flag)
            flag = false;
        if (i != 'B' and !flag)
            return false;
    }
    return true;
}

signed main()
{
    int t, size, res;
    cin >> t;
    string s;
    while (t--)
    {
        cin >> size >> s;
        if (check(s))
            res = 0;
        else
        {
            vector<int> v;
            char ch = 'A';
            int cnt = 0;
            for (auto &i : s)
            {
                if (i == ch)
                    ++cnt;
                else
                    --cnt;
                v.push_back(cnt);
            }
            cnt = 0;
            int br = max_element(v.begin(), v.end()) - v.begin();
            for (int i = 0; i <= br; i++)
                if (s[i] != 'A')
                    ++cnt;
            for (int i = br + 1; i < s.size(); i++)
                if (s[i] != 'B')
                    ++cnt;
            res = cnt;
            cnt = 0;
            for (auto &i : s)
                if (i == 'A')
                    ++cnt;
            res = min(res, cnt);
        }
        cout << res << '\n';
    }
    return 0;
}
