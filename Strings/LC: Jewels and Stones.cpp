// Approach 1
// class Solution {
// public:
//     int numJewelsInStones(string jewels, string stones) {
//         int count = 0;
//         for(int i=0; i<jewels.size(); i++)
//         {
//             for(int j=0; j<stones.size(); j++)
//             {
//                 if(jewels[i]==stones[j])
//                     count++;
//             }
//         }
//         return count;
//     }
// };

// Approach 2
class Solution {
    public:
    int numJewelsInStones(string jewels, string stones){
        int count =0;
        unordered_map<char, int> m;
        for( auto c: stones)
            ++m[c];
        for(auto c: jewels)
            count += m[c];
        return count;
    }
};
