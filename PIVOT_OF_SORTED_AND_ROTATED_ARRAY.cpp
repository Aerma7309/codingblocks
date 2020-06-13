/*
* @Date    : 2020-06-12 21:58:05
* @Author  : Abhimanyu Kumar Maurya (aerma7309@gmail.com)
*/
#include <bits/stdc++.h>
using namespace std;

bool ib = ios_base::sync_with_stdio(0);
bool it = cin.tie(0);

int getPivot(vector<int> &v, int start, int end)
{
    int mid, s = start, e = end;
    while (s <= e)
    {
        mid = (s + e) / 2;
        if (mid < end and v[mid + 1] < v[mid])
            return mid;
        else if (v[s] <= v[mid])
            s = mid + 1;
        else
            e = mid - 1;
    }
    return -1;
}

signed main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    cout << getPivot(v, 0, n - 1);
    return 0;
}
