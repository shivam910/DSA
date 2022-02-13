// Lik: https://leetcode.com/problems/subsets/submissions/

/**

for n elements there are 2^n subsets-----
                                        *
                                /                \
                             [1]                  []
                          /       \            /      \
                   [1,2]         [1]         [2]        []
                  /     \       /   \       /   \      /  \  
           [1,2,3]     [1,2] [1,3]  [1]  [2,3]  [2]   [3] []
* */

class Solution {    
public:
    vector <vector<int> > ans;
    void solution(vector<int> &subset, int i, vector<int> &nums) {
        if(i==nums.size()) {
            ans.push_back(subset);
            return;
        }
//         ith element not  in subset
        solution(subset,i+1,nums);
        
//         ith element in subset;
        subset.push_back(nums[i]);
        solution(subset, i+1, nums);
        subset.pop_back();
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector <int> empty;
        solution(empty,0,nums);
        return ans;
    }
};
