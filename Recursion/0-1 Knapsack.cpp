// 0-1 Knapsack using recursion

//Time : O(2^n)
//Space : O(1)

//In the following recursion tree, K() refers 
//to knapSack(). The two parameters indicated in the
//following recursion tree are n and W.
//The recursion tree is for following sample inputs.
//wt[] = {1, 1, 1}, W = 2, val[] = {10, 20, 30}
//                       K(n, W)
//                       K(3, 2)  
//                   /            \ 
//                 /                \               
//            K(2, 2)                  K(2, 1)
//          /       \                  /    \ 
//        /           \              /        \
//       K(1, 2)      K(1, 1)        K(1, 1)     K(1, 0)
//       /  \         /   \              /        \
//     /      \     /       \          /            \
//K(0, 2)  K(0, 1)  K(0, 1)  K(0, 0)  K(0, 1)   K(0, 0)

//Recursion tree for Knapsack capacity 2 
//units and 3 items of 1 unit weight.

#include <bits/stdc++.h>
using namespace std;

int knapsack(int W, int wt[], int val[], int n)
{
	if(n==0 || W==0)
		return 0;
		
	if(wt[n-1] > W)
		return knapsack(W, wt, val, n-1);
	else
		return max( val[n-1] + knapsack( W-wt[n-1], wt, val, n-1), knapsack(W, wt, val, n-1)); 
	
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
