#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, num, xr, res1 = 0, res2 = 0;
    cin >> t;
    int A[t];
    for (int i = 0; i < t; i++)
    {
        cin >> A[i];
    }
    xr = A[0];
    for (int i = 1; i < t; i++)
    {
        xr ^= A[i];
    }

    for (int i = 0; i < t; i++)
    {
        if (A[i] & 1)
            res1 ^= A[i];
        else
            res2 ^= A[i];
    }

    cout << min(res1, res2) << " " << max(res1, res2);
    return 0;
}
