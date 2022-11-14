class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans; // take an empty array of stack

        for(int i=0;i<asteroids.size();i++){
//first asteroid direction should be positive(right)
            if(ans.empty() || asteroids[i]>0){
                ans.push_back(asteroids[i]);
            }

            else {
                //check if dummy array is not empty and  remove the asteroid whose magnitue is less 
                while(!ans.empty() && ans.back()>0 && ans.back()<abs(asteroids[i])){
                ans.pop_back();
                }
             //if two astroid's moving direction is opposite but magnitute is same then both will be removed
                if(!ans.empty() && ans.back() + asteroids[i]==0){
                    ans.pop_back();
                }
                else if(ans.empty() || ans.back()<0){
                    ans.push_back(asteroids[i]);
                }
            }
        }
        return ans;
    }
};