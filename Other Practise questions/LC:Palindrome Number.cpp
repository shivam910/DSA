class Solution {
public:
    bool isPalindrome(int x) {
        let num=0;
        
        if(x<0 || (x!=0 && x%10 ==0))
            return false;

        while(x>num)
        {
            num = (num*10) + (x%10);
            x= x/10;
        }
        return x==num || x==num/10;
    }
};
