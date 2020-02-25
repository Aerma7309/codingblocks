#include <iostream>
using namespace std;
int calIndex(int n)
{
    if (n == 0)
        return 1;
    int res = calIndex(n / 10);
    res = res << 1;
    if (n % 10 == 7)
        res = res + 1;
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int num;
    cin >> num;
    cout << calIndex(num) - 1;
    return 0;
}
