/*
* @Date    : 2020-06-10 10:11:42
* @Author  : Abhimanyu Kumar Maurya (aerma7309@gmail.com)
*/
#include <bits/stdc++.h>
using namespace std;

bool ib = ios_base::sync_with_stdio(0);
bool it = cin.tie(0);

int ways(int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 2;
    return ways(n - 1) + ways(n - 2);
}

signed main()
{
    int t, cnt = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << "#" << cnt++ << " : " << ways(n) << '\n';
    }

    return 0;
}
