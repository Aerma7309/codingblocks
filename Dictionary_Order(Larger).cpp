/*
* @Date    : 2020-06-10 12:46:18
* @Author  : Abhimanyu Kumar Maurya (aerma7309@gmail.com)
*/
#include <bits/stdc++.h>
using namespace std;

bool ib = ios_base::sync_with_stdio(0);
bool it = cin.tie(0);

vector<string> vs;
void getWords(string str, int s, int e)
{
    if (s == e)
    {
        vs.emplace_back(str);
        return;
    }
    for (int i = s; i <= e; i++)
    {
        swap(str[i], str[s]);
        getWords(str, s + 1, e);
        swap(str[i], str[s]);
    }
}

signed main()
{
    string s;
    cin >> s;
    vs.reserve(1 << s.size());
    getWords(s, 0, s.size() - 1);
    sort(vs.begin(), vs.end());
    auto it = upper_bound(vs.begin(), vs.end(), s);
    while (it != vs.end())
    {
        cout << *it << '\n';
        it++;
    }
    return 0;
}
