/*
* @Date    : 2020-06-09 12:46:41
* @Author  : Abhimanyu Kumar Maurya (aerma7309@gmail.com)
*/
#include <bits/stdc++.h>
using namespace std;

bool ib = ios_base::sync_with_stdio(0);
bool it = cin.tie(0);

vector<string> searchIn{"prateek", "sneha", "deepak", "arnav", "shikha", "palak", "utkarsh", "divyam", "vidhi", "sparsh", "akku"};
vector<string> table{" ", ".+@$", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
vector<string> result;
void getCode(string &s, string out, int i, int n)
{
    // base case or final case
    if (i == n)
    {
        for (auto &i : searchIn)
        {
            for (int x = 0; x < i.size() - n + 1; x++)
                if (i.substr(x, n) == out)
                    result.emplace_back(i);
        }
    }

    for (auto &ch : table[s[i] - '0'])
        getCode(s, out + ch, i + 1, n);
}

signed main()
{
    string s;
    cin >> s;
    getCode(s, "", 0, s.size());
    for (auto &i : result)
        cout << i << '\n';
    return 0;
}
