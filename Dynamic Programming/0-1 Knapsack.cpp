// // 0-1 knapsack using dp 

// //Time Complexity: O(N*W).
// //Auxiliary Space: O(W).

// #include <bits/stdc++.h>
// using namespace std;

// int knapsack(int W, int wt[], int val[], int n)
// {
// 	int dp[n+1][W+1];
	
// 	for(int j=0; j< W+1; j++)
// 		dp[0][j] = 0;
	
// 	for(int i=1; i<=n; i++)
// 		for(int j=0; j<=W; j++) {
			
// 			if(wt[i-1] > j) 
// 				dp[i][j] = dp[i-1][j];
// 				else
// 				dp[i][j] = max(dp[i-1][j], dp[i-1][j - wt[i-1]] + val[i-1]);
			
// 		}
// 	return dp[n][W];
// }

// int main()
// {
// 	int val[] = { 60, 100, 120 };
//     int wt[] = { 10, 20, 30 };
//     int W = 50;
//     int n = sizeof(val) / sizeof(val[0]);
//     cout<<knapsack( W, wt, val, n);
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int knapsack(int W, int wt[], int val[], int n)
{
	int dp[W+1];
	memset(dp, 0 , sizeof(dp));
	
	for(int i=1; i<n+1; i++)
		for(int j=W; j>=0; j--) {
			
			if(wt[i-1] <= j) {
				dp[j] = max(dp[j], dp[j - wt[i-1]] + val[i-1]);
			}
		}
	return dp[W];
}

int main()
{
	int val[] = { 60, 100, 120 };
    int wt[] = { 10, 20, 30 };
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);
    cout<<knapsack( W, wt, val, n);
    return 0;
}




