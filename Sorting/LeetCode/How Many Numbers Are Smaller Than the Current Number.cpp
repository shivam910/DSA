/*Approach 1:
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int size = nums.size(), count = 0;
        vector <int> v;
        unordered_set s( nums.begin(), nums.end() );
        for( auto n : nums )
        {
            for( auto k : nums )
            {
                if( n>k )
                    count++;
            }
            v.push_back( count );
            count = 0;
        }
        return v;
    }
};
*/

// Approach 2:

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int size = nums.size();
        vector <int> v = nums;
        vector <int> ans(size);
        sort( v.begin(), v.end() );
        
        for( int i=0; i< size; i++ )
        {
            int j = find( v.begin(), v.end(), nums[i] ) - v.begin();
            ans[i] = j;
        }
    return ans;
    }
};
