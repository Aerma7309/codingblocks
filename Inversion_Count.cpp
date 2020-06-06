/*
* @Date    : 2020-06-06 21:32:15
* @Author  : Abhimanyu Kumar Maurya (aerma7309@gmail.com)
*/
#include <bits/stdc++.h>
using namespace std;

bool ib = ios_base::sync_with_stdio(0);
bool it = cin.tie(0);

int merge(vector<int> &v, int s, int e)
{
    vector<int> t(e - s + 1);
    int mid = (s + e) / 2, cnt = 0;
    int i = s, j = mid + 1, k = 0;
    while (i <= mid and j <= e)
    {
        if (v[i] <= v[j])
            t[k++] = v[i++];
        else
        {
            cnt += mid - i + 1;
            t[k++] = v[j++];
        }
    }
    while (i <= mid)
        t[k++] = v[i++];
    while (j <= e)
        t[k++] = v[j++];
    for (int x = 0; x < t.size(); x++)
        v[s + x] = t[x];
    return cnt;
}

int inversion_count(vector<int> &v, int s, int e)
{
    if (s >= e)
        return 0;
    int mid = (s + e) / 2;
    int a = inversion_count(v, s, mid);
    int b = inversion_count(v, mid + 1, e);
    int c = merge(v, s, e);
    return a + b + c;
}

signed
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &i : v)
            cin >> i;
        cout << inversion_count(v, 0, n - 1) << '\n';
    }

    return 0;
}
