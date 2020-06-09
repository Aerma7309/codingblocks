/*
* @Date    : 2020-06-09 11:34:19
* @Author  : Abhimanyu Kumar Maurya (aerma7309@gmail.com)
*/
#include <bits/stdc++.h>
using namespace std;

bool ib = ios_base::sync_with_stdio(0);
bool it = cin.tie(0);
#define int long long

int countPairs(int n)
{
    if (n == 0 or n == 1)
        return 1;
    return countPairs(n - 1) + (n - 1) * countPairs(n - 2);
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << countPairs(n) << '\n';
    }

    return 0;
}
