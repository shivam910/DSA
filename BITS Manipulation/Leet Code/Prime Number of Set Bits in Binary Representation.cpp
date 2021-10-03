class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int prime =0;
        for(int i=left; i <= right; i++)
        {
            int nums = i, count =0;
            while(nums)
            {
                nums &= nums-1;
                count++;
            }
            if(count ==2 || count ==3 || count ==5 || count ==7|| count ==11 ||                count ==13 || count ==17 || count ==19)
                prime++;
        }
        return prime;
    }
};
