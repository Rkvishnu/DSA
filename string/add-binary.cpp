class Solution {
public:
    string addBinary(string a, string b) {
        
        string result="";        

        int carry=0,i=0;
        int a_len=a.size(),b_len=b.size();  //traverse from last

       while(i<a_len||i<b_len||carry!=0){
           int x=0;
           if(i<a_len && a[a_len-1-i]=='1'){
               x=1;
           }

           int y=0;
           if(i<b_len && b[b_len-i-1]=='1'){
               y=1;
           }
        int sum=x+y+carry;

        result= to_string(sum%2) + result;
        carry=sum/2;

       i+=1;
       }
       return result;
    }
};