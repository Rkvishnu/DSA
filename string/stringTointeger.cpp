 class Solution {
public:
    int myAtoi(string s) {
    if (s.size()==0) return 0;
    int i=0;

    //1. handling whitespace cases
    while(i<s.size() && s[i]==' '){
        i++;
    }

    s=s.substr(i); // ignore whitespace and update  the rest string  part 
//2. handling sign cases
    int sign =+1;

//3.if sign is negative then update the sign and sign will be present only on first pos
    if(s[0]=='-') sign=-1;
    long ans=0;

    int max=INT_MAX;
    int min=INT_MIN;

//if s[0] is + or - then stART FORM FIRST POSITION
    i=(s[0]=='+'|| s[0]=='-')? 1:0;  

//traversing in string

while(i<s.length()){
//if in middle somewhere whitespace comes or the any characte comes then break
if(s[i]==' '|| !isdigit(s[i])) break;

ans=ans*10 + s[i]-'0';
//  if number is going out of the limit
if(sign==-1 && -1*ans<min) return min;
if(sign==1  && ans > max) return max;

i++;
}

return (int)(sign*ans);
    }
};
