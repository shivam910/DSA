class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size= nums.size(),count=0;;
        for(int i=0;i<size;)
        {
            if (nums[i] != val) {
                ++i;
            } else {
                swap(nums[i],  nums[--size]);
            }
        }
        return (size);
    }
};