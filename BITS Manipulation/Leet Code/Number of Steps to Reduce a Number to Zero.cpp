//.... Given an integer num, return the number of steps to reduce it to zero.

// In one step, if the current number is even, you have to divide it by 2, otherwise, you have to subtract 1 from it.

// ...........even & 1 = 0 ............ odd & 1 = 1 .................

class Solution {
public:
    int numberOfSteps(int num) {
        int count= 0;
        while(num)
        {
            if((num & 1) ==0)
              num>>=1;
            else 
              num-=1;
            count++;
        }
        return count;
    }
};
