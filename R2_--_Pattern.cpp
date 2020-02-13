#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = t%2?t:t-1; i >=1; i-=2)
    {
        cout<<i<<endl;
    }
    for (int i = 2; i <= t; i+=2)
    {
        cout<<i<<endl;
    }
    
    
    return 0;
}
