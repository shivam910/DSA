class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size(), n2 = nums2.size();
        vector <int> ans;
        for(int i=0; i<n1; i++)
        {
            bool finded = false;
            for (int j=0; j<n2; j++) {
                
                if( finded && nums2[j]>nums1[i]) {
                    ans.push_back(nums2[j]);
                    break;
                }
                
                if( nums2[j]== nums1[i])
                    finded = true;
            }
            if( ans.size() != i+1 )
                ans.push_back(-1);
        }
        return ans;
    }
};
