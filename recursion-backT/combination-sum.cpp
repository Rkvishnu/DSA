  class Solution{
    public:
vector<vector<int>>ans;  

    vector<vector<int>> combinationSum(vector<int>&candidates,int target){
//sorting 
sort(candidates.begin(),candidates.end());  

//eliminate any duplicate number in initial set
set<int> s(candidates.begin(),candidates.end());
candidates.assign(candidates.begin(),candidates.end()); //asign afetr eliminating the duplicates
vector<int>v;

combo(candidates,target,v,0);
return ans;
    }

void combo(vector<int> &candidates,int target,vector<int>&v,int i){
 

if(target==0){
    ans.push_back(v);
}
    while(i<candidates.size() && target-candidates[i]>=0){ //3
        v.push_back(candidates[i]); //1,1
        combo(candidates,target-candidates[i],v,i);  //0,0,(1,1,1)
        i++;
        //back_track once we return back from call
        v.pop_back();
    }

    }
};