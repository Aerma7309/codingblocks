#include <iostream>
using namespace std;
int main()
{
    int n, m, carry = 0, tmp;
    cin >> n;
    short A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cin >> m;
    short B[m];
    for (int i = 0; i < m; i++)
    {
        cin >> B[i];
    }
    short res[max(n, m) + 2];
    for (int i = min(n, m) - 1, j = max(n, m) + 1; i >= 0; i--, j--)
    {
        tmp = A[i] + B[i] + carry;
        res[j] = tmp % 10;
        carry = tmp / 10;
    }
    int i = max(m, n) + 2 - min(m, n);
    if (n > m)
    {
        while (carry > 0)
        {
            res[i] = (A[i] + carry) % 10;
            carry = (A[i] + carry) / 10;
            i--;
        }
        while (i >= 0)
        {
            res[i] = A[i];
            i--;
        }
    }
    else
    {
        while (carry > 0)
        {
            res[i] = (B[i] + carry) % 10;
            carry = (B[i] + carry) / 10;
            i--;
        }
        while (i >= 0)
        {
            res[i] = B[i];
            i--;
        }
    }
    bool flag=false;
    for (int i = 0; i < max(n, m) + 2; i++)
    {
        if(A[i]>0 and flag==false) flag=true;
        if(flag) cout<<A[i]<<", ";
    }
    cout<<"END";
    return 0;
}
