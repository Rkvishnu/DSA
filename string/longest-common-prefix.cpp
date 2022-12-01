class Solution{
    public:
    string longestCommonPrefi(vector<string> &strs){
        if(strs.empty())return "";

        int len=strs.size();

        sort(strs.begin(),strs.end());

        string first= strs[0]; //taking first string from the sorted array
        string last= strs[l-1]; // taking last string 

        string result;
        
        for(int i=0;i<first.size();i++){
            if(first[i]==last[i]){
                result+=first[i];
            }
            else break;
        }
        return result;
    }
}