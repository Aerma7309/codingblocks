// #include <iostream>
// #include <bitset>
// using namespace std;
// int count = 0;
// bitset<30> col, d1, d2;

// void solve(int r, int n)
// {
//     if (r == n)
//     {
//         count++;
//         return;
//     }
//     for (int c = 0; c < n; c++)
//     {
//         if (!col[c] and !d1[r - c + n - 1] and !d2[r + c])
//         {
//             col[c] = d1[r - c + n - 1] = d2[r + c] = 1;
//             solve(r + 1, n);
//             col[c] = d1[r - c + n - 1] = d2[r + c] = 0;
//         }
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int n;
//     cin >> n;
//     solve(0, n);
//     cout << count;
//     return 0;
// }

/*
* @Date    : 2020-06-14 02:02:19
* @Author  : Abhimanyu Kumar Maurya (aerma7309@gmail.com)
*/
#include <bits/stdc++.h>
using namespace std;

bool ib = ios_base::sync_with_stdio(0);
bool it = cin.tie(0);
int DONE;
int cnt = 0;
void solve(int row, int ld, int rd)
{
    if (row == DONE)
    {
        cnt++;
        return;
    }
    int safe = DONE & (~(row | ld | rd));
    while (safe)
    {
        int p = safe & (-safe);
        solve(row | p, (ld | p) << 1, (rd | p) >> 1);
        safe -= p;
    }
}

signed main()
{
    int n;
    cin >> n;
    DONE = (1 << n) - 1;
    solve(0, 0, 0);
    cout << cnt;
    return 0;
}
