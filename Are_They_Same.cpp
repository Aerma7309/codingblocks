/*
* @Date    : 2020-06-14 22:57:41
* @Author  : Abhimanyu Kumar Maurya (aerma7309@gmail.com)
*/
#include <bits/stdc++.h>
using namespace std;

bool ib = ios_base::sync_with_stdio(0);
bool it = cin.tie(0);

bool equivalent(string a, string b)
{
    int size = a.size();
    if (a == b)
        return true;
    else if (size & 1 or a.size() != b.size())
        return false;
    bool res1 = equivalent(a.substr(0, size / 2), b.substr(0, size / 2)) and equivalent(a.substr(size / 2), b.substr(size / 2));
    bool res2 = equivalent(a.substr(0, size / 2), b.substr(size / 2)) and equivalent(a.substr(size / 2), b.substr(0, size / 2));
    return res1 or res2;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        if (equivalent(a,b))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
