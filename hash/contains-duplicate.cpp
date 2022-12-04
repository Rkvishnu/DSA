
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n= nums.size();
        int s = set<int>(nums.begin(),nums.end()).size();
        return n>s;        
    }
};
