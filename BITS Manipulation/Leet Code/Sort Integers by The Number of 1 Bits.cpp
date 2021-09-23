/*
Input: arr = [0,1,2,3,4,5,6,7,8]
Output: [0,1,2,4,8,3,5,6,7]

Explantion: [0] is the only integer with 0 bits.
[1,2,4,8] all have 1 bit.
[3,5,6] have 2 bits.
[7] has 3 bits.
The sorted array by bits is [0,1,2,4,8,3,5,6,7]
*/

class Solution {
public:
     int count(int x) {
        int ones=0;
        while(x) {
            ones++;
            x&= x-1;
        }  
        return ones;
    }
    
    vector<int> sortByBits(vector<int>& arr) {
        
        vector <int> a;
        for(int c: arr) {
            a.push_back(count(c)*100000 + c);  
        }
        
        sort(a.begin(),a.end());
        
        for(int i=0; i<a.size(); i++) {
            a[i]=a[i]%100000;
        }
        return a;
    }
};
