// Link:https://leetcode.com/problems/boats-to-save-people/

class Solution {
public:
	int numRescueBoats(vector<int>& people, int limit) {
        int n=people.size(), ans=0, i=0, j=n-1;
        sort(people.begin(),people.end());
        while(i<=j){
            if(people[i]+people[j]<=limit) i++;
            j--, ans++;
        }
        return ans;
    }
};
