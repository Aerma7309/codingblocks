#include<iostream>
#include<cmath>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    const ll M=1000000007;
    ll t,n,temp;
    ll sum=0;
    cin>>t;
    int s[200001], b[200001];
        while (t--)
        {
            cin>>n;
            for(ll i=0; i<n;i++)
                cin>>s[i];
            for (ll i = 0; i < n; i++)
                cin >> b[i];
            for (ll i = 0; i < n-1; i++)
            {
                for(ll j=i+1;j<n;j++)
                {
                    temp = ((abs(s[i] - s[j])%M) * max(b[i], b[j]))%M;

                    sum = (sum + temp) % M;
                }
            }
            cout<<sum<<endl;
        }

        return 0;
}
