/*
* @Date    : 2020-06-09 12:02:39
* @Author  : Abhimanyu Kumar Maurya (aerma7309@gmail.com)
*/
#include <bits/stdc++.h>
using namespace std;

bool ib = ios_base::sync_with_stdio(0);
bool it = cin.tie(0);

vector<string> v;

void generateCodes(string &s, string out, int i, int n)
{
    if (i >= n)
    {
        v.emplace_back(out);
        return;
    }
    char ch = s[i] - '0' + 'a' - 1;
    generateCodes(s, out + ch, i + 1, n);
    if (i + 1 < n)
    {
        int num = (int)(s[i] - '0') * 10 + (s[i + 1] - '0');
        char ch = 'a' + num - 1;
        if (num < 26)
            generateCodes(s, out + ch, i + 2, n);
    }
}

signed main()
{
    string s;
    cin >> s;
    generateCodes(s, "", 0, s.size());
    cout << '[';
    for (int i = 0; i < v.size() - 1; i++)
        cout << v[i] << ", ";
    cout << v[v.size() - 1] << ']';

    return 0;
}
