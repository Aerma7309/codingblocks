// @author: Abhimanyu Maurya

#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cin >> r >> c;
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    int rs = 0, re = r - 1, cs = 0, ce = c - 1;
    while (rs <= re and cs <= ce)
    {
        for (int i = cs; i <= ce; i++)
        {
            cout << a[rs][i] << ", ";
        }
        rs++;
        for (int i = rs; i <= re; i++)
        {
            cout << a[i][ce] << ", ";
        }
        ce--;
        if (cs < ce or rs < re)
        {
            for (int i = ce; i >= cs; i--)
                cout << a[re][i] << ", ";
            re--;
        }
        if (cs < ce or rs < re)
        {
            for (int i = re; i >= rs; i--)
                cout << a[i][cs] << ", ";
            cs++;
        }
    }
    cout << "END";
    return 0;
}
