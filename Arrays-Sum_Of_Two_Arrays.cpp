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
    for (int i = min(n, m)-1,j=max(n,m)+1; i >=0; i--,j--)
    {
        tmp = A[i] + B[i] + carry;
        res[j] = tmp%10;
        carry = tmp/10;
    }
    int i = max(m,n)+2 -min(m,n);
    if(n>m)
    {
        while (i > 0)
        {
            
        }
    }

    
    return 0;
}
