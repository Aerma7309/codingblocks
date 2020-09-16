#include<bits/stdc++.h>
using namespace std;

signed main()
{
	int n,q;
	cin>>n;
	string s;
	cin>>s;
	cin>>q;
	bool dp[n][n];
	memset(dp,0,sizeof dp);
	for(int a=0;a<n;a++)
		for(int i=0,j=a;j<n;j++,i++)
		{
			if(i==j) dp[i][j] = true;
			else if(abs(i-j)==1 and s[i]==s[j]) dp[i][j]=true;
			else if(i <n and j>0 and dp[i+1][j-1] and s[i]==s[j]) dp[i][j] =true; 
		}
	while(q--)
	{
		int l,r;
		cin>>l>>r;
		cout<<(dp[l-1][r-1]?"YES":"NO")<<'\n';
	}
	return 0;
}
