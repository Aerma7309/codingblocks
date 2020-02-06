#include<iostream>
#include<cmath>
#include<cassert>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,A;
    cin>>n;
    bool falg;
    while (n--)
    {
        cin>>A;
        falg=false;
        for (int i = 0; i <= (int)sqrt(A); i++)
        {
            for (int j = i; j <= (int)sqrt(A); j++)
            {
                if ((i*i+j*j)==A)
                {
                    assert(i<=j);
                    cout<<'('<<i<<','<<j<<") ";
                    falg=true;
                }
                
            }
            
        }
        if(falg) cout<<'\n';
    }
    
    return 0;
}
