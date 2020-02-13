#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int row=1;row<=t;row++)
    {
        for(int col=0; col<2*t;col++)
        {
            if(col<row) cout<<'*';
        }
        for (int col = 2 * t; col >0; col--)
        {
            if (col < row)
                cout << '*';
            else
                cout << ' ';
        }
        cout << endl;
    }
    return 0;
}
