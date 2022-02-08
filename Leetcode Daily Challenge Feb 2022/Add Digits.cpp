// Time O(1)
class Solution {
public:
    int addDigits(int num) {
        if(num==0)
            return 0;
        else
        if(num%9==0) 
            return 9;
        else 
            return num%9;
    }
};

// time : O(c)
// class Solution {
// public:
//     int addDigits(int num) {
        
//         int sum=(num%10);
//         while(num/=10)
//         {
//             sum+=(num%10);
//         }
//         if(sum>9)
//             return addDigits(sum);
        
//         return sum;
//     }
// };
