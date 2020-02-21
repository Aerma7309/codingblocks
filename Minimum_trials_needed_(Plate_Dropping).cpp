#include<iostream>
int count =0;
void BSearch(int l,int r,int n)
{
    int mid= (l+r)>>1;
    if(mid==n) 
    {
        count++;
        return;
    }
    if(mid > n) return BSearch(l,mid-1,n);
    else return BSearch(mid+1,r,n);
}

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,k,n,floor[11];
    for (int i = 0; i < 11; i++)
    {
        floor[i]=i;
    }
    
    cin>>t;
    while (t--)
    {
        count=0;
        cin>>k>>n;
        BSearch(1,n,k);
    }
    


    return 0;
}
