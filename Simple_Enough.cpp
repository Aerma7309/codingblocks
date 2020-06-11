/*
* @Date    : 2020-06-11 11:44:36
* @Author  : Abhimanyu Kumar Maurya (aerma7309@gmail.com)
*/
#include <bits/stdc++.h>
using namespace std;

bool ib = ios_base::sync_with_stdio(0);
bool it = cin.tie(0);
#define int long long

int n, l, r;

int count(int n, int lb, int ub)
{
    if (ub < l or lb > r)
        return 0;
    if (lb == ub)
        return n;
    int mid = (lb + ub) / 2;
    int left = count(n / 2, lb, mid - 1);
    int right = count(n / 2, mid + 1, ub);
    int middle = (mid >= l and mid <= r) ? n % 2 : 0;
    return left + middle + right;
}

signed main()
{

    cin >> n >> l >> r;
    int ub = (1LL << (int)(log2(n) + 1)) - 1;
    cout << count(n, 1, ub);
    return 0;
}
