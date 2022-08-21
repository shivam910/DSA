//Link: https://leetcode.com/problems/container-with-most-water/


class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0, r= height.size()-1,maxi=0;
        while(l<r){
            int j = min(height[l],height[r])*(r-l);
            maxi = max(maxi,j);
            height[l] < height[r] ? l++ : r--;
        }
        return maxi;
    }
};


// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int maxi =0;
//         for(int i=0;i<height.size(); i++){
//             for(int j = height.size()-1;j>i; j--){
//                 int l = min(height[i],height[j]);
//                 maxi = max(maxi,(l*(j-i)));
//             }
//         }
//         return maxi;
//     }
// };
