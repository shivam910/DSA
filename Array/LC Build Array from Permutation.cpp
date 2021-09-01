class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int size= nums.size();
        vector<int> ans;
        for(int i=0; i<size; i++)
        {
            int k=nums[i];
            int j=nums[k];
            ans.push_back(j);
        }
        return ans;
    }
};
