class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       
        
        for(int i = 0;i < nums.size();i++)
        {
            for(int j = i + 1;j < nums.size();j++)
            {
                // j = i + 1; no need to check back elements it covers in i;
                if ((nums[i] + nums[j]) == target){
                    // Check sum == target or not
                    return{i,j};
                }
                
            }
        }
        return {};
    }
};