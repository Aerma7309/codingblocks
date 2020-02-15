#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, num, res = 0;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i += 3)
    {
        if (A[i] ^ A[i + 2])
        {
            cout << A[i];
            break;
        }
    }

    return 0;
}
