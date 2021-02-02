/*
* @Date    : 2020-04-24 14:03:40
* @Author  : Abhimanyu Kumar Maurya (aerma7309@gmail.com)
*/
#include <bits/stdc++.h>
using namespace std;

bool ib = ios_base::sync_with_stdio(0);
bool it = cin.tie(0);

signed main()
{
    int n, m, time = 0, temp;
    cin >> n >> m;
    list<int> passengers(n);
    vector<int> planes(m);
    for (auto &i : passengers)
        cin >> i;
    for (auto &i : planes)
        cin >> i;
    sort(passengers.begin(), passengers.end());
    sort(planes.begin(), planes.end());
    if (passengers[n - 1] > planes[m - 1])
    {
        cout << -1 << '\n';
        return 0;
    }
    int cnt = 0, ng = 0, planeptr = 0, i = 0, j = 0;
    while (i<n)
    {
        if (planes[j] >= passengers[i])
        {
            i++, j++;
            if (j == m and i<n)
            {
                j = planeptr;
                cnt += 2;
            }
            if (i == n)
                cnt++;
        }
        else
        {
            j++;
            planeptr = j;
        }
    }
    cout << cnt << '\n';
    return 0;
}
