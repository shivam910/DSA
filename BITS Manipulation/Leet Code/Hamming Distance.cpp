/*
The Hamming distance between two integers is the number of positions at which the corresponding bits are different.

Given two integers x and y, return the Hamming distance between them.

Example 1:

Input: x = 1, y = 4
Output: 2
Explanation:
1   (0 0 0 1)
4   (0 1 0 0)
       ↑   ↑
The above arrows point to positions where the corresponding bits are different.
*/

class Solution {
public:
    int hammingDistance(int x, int y) {
        int z= x^y, distance=0;
        for(; z>0 ; z&=z-1)
            distance++;
        return distance;
    }
};

// The logic of z&=z-1 can also be used to find the number of 1s bit in give number
