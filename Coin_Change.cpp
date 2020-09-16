// // @author: Abhimanyu Maurya

// #include <iostream>
// #include <cstring>
// using namespace std;
// int countways(int n, int start, int end, int a[51], int data[251][51])
// {
//     if (n < 0)
//         return 0;
//     if (n == 0)
//         return 1;
//     if (start == end)
//         return 0;
//     if (data[n][start] != -1)
//         return data[n][start];
//     // selecting first denomination
//     int way1 = countways(n - a[start], start, end, a, data);
//     // rejecting first denomination
//     int way2 = countways(n, start + 1, end, a, data);
//     data[n][start] = way1 + way2;
//     return way1 + way2;
// }

// int main()
// {
//     int n, m, data[251][51], A[51];
//     memset(data, -1, sizeof(data));
//     memset(data, -1, sizeof(A));
//     cin >> n >> m;
//     for (int i = 0; i < m; i++)
//     {
//         cin >> A[i];
//     }
//     cout << countways(n, 0, m, A, data);
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

signed main()
{
	int n,m;
	cin>>n>>m;
	vector<int> v(m+1,0);
	for(int i=1;i<=m;i++) cin>>v[i];
	vector<vector<int>> dp(m+1,vector<int>(n+1,0));
	for(int i=0;i<=m;i++)
		dp[i][0]=1;
	for(int c=1;c<=m;c++)
		for(int a=1;a<=n;a++)
			if(a>=v[c])
				dp[c][a]= dp[c][a-v[c]] +dp[c-1][a];
			else 
				dp[c][a]= dp[c-1][a];	
	cout<<dp[m][n];
	return 0;
}
