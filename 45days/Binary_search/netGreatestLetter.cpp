class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
       int n= letters.size();
        int l=0;
        int h=n-1;
        while(l<=h){
            int  mid = l+ (h-l)/2;
            if(letters[mid]<=target) l=mid+1;
            else h=mid-1;
            
          if(letters[l]>target) return letters[l];
        }
        return letters[0];
    }
};