class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        while(stones.size()>1) {
            int n = stones.size();
            sort(stones.begin(), stones.end());
            if(stones[n-2]==stones[n-1])  {
                stones.pop_back();
                stones.pop_back();
            }
            else {
                stones[n-2]=(stones[n-1]-stones[n-2]);
                stones.pop_back();
            }
        }
        return stones.empty() ? 0:stones[0];
    }
};
