/*
* @Date    : 2020-06-09 16:30:07
* @Author  : Abhimanyu Kumar Maurya (aerma7309@gmail.com)
*/
#include <bits/stdc++.h>
using namespace std;

bool ib = ios_base::sync_with_stdio(0);
bool it = cin.tie(0);

vector<vector<int>> p;

void permute(vector<int> vs, int s, int e)
{
    if (s == e)
    {
        p.emplace_back(vs);
        return;
    }
    for (int j = s; j <= e; j++)
    {
        if (s != j and vs[s] == vs[j])
            continue;
        swap(vs[s], vs[j]);
        permute(vs, s + 1, e);
    }
}

signed main()
{
    int n;
    cin >> n;
    vector<int> vs(n);
    for (auto &i : vs)
        cin >> i;
    sort(vs.begin(), vs.end());
    permute(vs, 0, n - 1);
    for (auto &i : p)
    {
        for (auto &j : i)
            cout << j << ' ';
        cout << '\n';
    }
    return 0;
}
