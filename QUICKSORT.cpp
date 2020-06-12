/*
* @Date    : 2020-06-11 23:46:45
* @Author  : Abhimanyu Kumar Maurya (aerma7309@gmail.com)
*/
#include <bits/stdc++.h>
using namespace std;

bool ib = ios_base::sync_with_stdio(0);
bool it = cin.tie(0);

int makePartition(vector<int> &v, int l, int r)
{
    int i, j, pivot = v[r];
    for (i = l - 1, j = l; j < r; j++)
        if (v[j] <= pivot)
            swap(v[++i], v[j]);
    swap(v[++i], v[r]);
    return i;
}

void quickSort(vector<int> &v, int l, int r)
{
    if (l >= r)
        return;
    int p = makePartition(v, l, r);
    quickSort(v, l, p - 1);
    quickSort(v, p + 1, r);
}

signed main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    quickSort(v, 0, n - 1);
    for (auto &i : v)
        cout << i << " ";
    return 0;
}
