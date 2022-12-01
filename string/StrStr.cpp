class Solution {
public:
    int strStr(string haystack, string needle) {

        //solution1
        //two pointer solution

        if(needle=="")
            return 0;
        
        int i=0,j=0;
        while(i<haystack.size() && j<needle.size())
        {
            if(haystack[i]==needle[j])
            { // when there is a match then increase both the pointers
                i++;
                j++;
                if(j==needle.size()) // if the whole pattern has been matched then return
                    return i-needle.size();   
            }
            else
            { 
                // when there is no match then start checking from the haystack index
                i=i-j+1;  
                j=0; 
            }            
        }        
        return -1;
    

    /*

        //solution2 
        //     int strStr(string haystack, string needle) {
        // return haystack.find(needle);
        */
    

    }
};
