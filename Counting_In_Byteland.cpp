/*
*    @Date    : 2021-02-02 20:27:41
*    @Author  : aerma7309 
*/
 
#include <bits/stdc++.h>
using namespace std;
int FastIO = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
#define int long long
int total = 0;
void point_update(vector<vector<vector<int>>> &bit, int n, int x, int y, int z, int val)
{
    ++x, ++y, ++z;
    for (int a = x; a < n; a += (a & (-a)))
        for (int b = y; b < n; b += (b & (-b)))
            for (int c = z; c < n; c += (c & (-c)))
                bit[a][b][c] += val;
    total += val;
}
 
int point_query(vector<vector<vector<int>>> &bit, int n, int a, int b, int c)
{
    ++a, ++b, ++c;
    int res = 0;
    for (int x = a; x > 0; x -= (x & (-x)))
        for (int y = b; y > 0; y -= (y & (-y)))
            for (int z = c; z > 0; z -= (z & (-z)))
                res += bit[x][y][z];
    return res;
}
 
int range_query(vector<vector<vector<int>>> &bit, int n, int x, int y, int z, int X, int Y, int Z)
{
    return point_query(bit, n, X, Y, Z) - point_query(bit, n, x - 1, Y, Z) - point_query(bit, n, X, y - 1, Z) - point_query(bit, n, X, Y, z - 1) - point_query(bit, n, x - 1, y - 1, z - 1) + point_query(bit, n, x - 1, y - 1, Z) + point_query(bit, n, X, y - 1, z - 1) + point_query(bit, n, x - 1, Y, z - 1);
}
signed main()
{
    int n, q, x, y, z, val, X, Y, Z, op;
    cin >> n >> q;
    n+=2;
    vector<vector<vector<int>>> bit(n, vector<vector<int>>(n, vector<int>(n, 0)));
    for (int i = 0; i < q; i++)
    {
        cin >> op;
        if (op == 1)
        {
            cin >> x >> y >> z >> val;
            point_update(bit, n, x, y, z, val);
        }
        else
        {
            cin >> x >> y >> z >> X >> Y >> Z;
            cout << total - range_query(bit, n, x, y, z, X, Y, Z) << '\n';
        }
    }
 
    return 0;
}