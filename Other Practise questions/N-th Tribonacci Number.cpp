// https://leetcode.com/explore/challenge/card/september-leetcoding-challenge-2021/639/week-4-september-22nd-september-28th/3986/

/*
The Tribonacci sequence Tn is defined as follows: 

T0 = 0, T1 = 1, T2 = 1, and Tn+3 = Tn + Tn+1 + Tn+2 for n >= 0.

Given n, return the value of Tn.

Example 1:

Input: n = 4
Output: 4
Explanation:
T_3 = 0 + 1 + 1 = 2
T_4 = 1 + 1 + 2 = 4

*/

class Solution {
public:
    int tribonacci(int n) {
        int F[38];
        F[0]=0,F[1]=F[2]=1;
        for(int i=3; i<38; i++)
        {
            F[i]=F[i-3]+F[i-2]+F[i-1];
        }
        return F[n];
    }
};
