/*
* @Date    : 2020-04-24 07:05:57
* @Author  : Abhimanyu Kumar Maurya (aerma7309@gmail.com)
*/
#include <bits/stdc++.h>
using namespace std;

bool ib = ios_base::sync_with_stdio(0);
bool it = cin.tie(0);

int main()
{
    unsigned short i, mask;
    int t, m;
    cin >> t;
    char c;
    bool bit;
    while (t--)
    {
        cin >> i >> m >> c;
        if (c == 'R')
        {
            while (m--)
            {
                bit = i & 1;
                i >>= 1;
                mask = 1 << 15;
                mask = ~mask;
                i &= mask;
                i |= (bit << 15);
            }
            cout << i << '\n';
        }
        else
        {
            while (m--)
            {
                bit = (i >> 15) & 1;
                i <<= 1;
                i += bit;
            }
            cout << i << '\n';
        }
    }
    return 0;
}
