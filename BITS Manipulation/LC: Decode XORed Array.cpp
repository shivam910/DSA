// Decode XORed Array

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> arr;
        arr.push_back(first);
        int k;
        for(int i=0; i<encoded.size(); i++)
        {
            k = encoded[i]^arr[i];
            arr.push_back(k);
        }
        return arr;
    }
};

//  0   000
//  1   001
//  2   010
//  3   011
//  4   100
//  5   101
//  6   110
//  7   111
