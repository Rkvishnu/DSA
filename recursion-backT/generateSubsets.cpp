class Solution {
public:
void generateAllSubsets(vector<int>&nums, int currIndex, vector<int>&ans, vector<vector<int>> &powerSet){
    //once the index is greator than or equal to size then store the result in powerset
   if(currIndex>=nums.size()) {
       powerSet.push_back(ans);
       return;
          }

          int currentVal= nums[currIndex];  // variable to store the current index
          ans.push_back(currentVal);  // insert the considered value

        //recursively call 
          generateAllSubsets(nums,currIndex+1,ans,powerSet);

          // removing not considered Currentvalue
          ans.pop_back();

          generateAllSubsets(nums, currIndex+1,ans, powerSet);
}
    vector<vector<int>> subsets(vector<int>& nums) {

vector<vector<int>>powerSet;
vector<int>ans;
generateAllSubsets(nums,0,ans,powerSet);
return powerSet;
    }
};