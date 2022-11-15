class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        int n= nums.size();
    vector<int>ans(n,0);
        for(int i=n-1;i>=0;i--) {
            st.push(nums[i]);
        }
//traverse from last

        for(int i=n-1;i>=0;i--){
            int currVal=nums[i];
// check if currVal element is less then st.top() then pop
            while(!st.empty() && st.top()<=currVal){
                st.pop();
            }
            ans[i]=st.empty()?-1:st.top();
            st.push(currVal);
        }
        return ans;
    }
};