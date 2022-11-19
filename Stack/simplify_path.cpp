
class Solution {
public:
    string simplifyPath(string path) {
        
        stack<string>st;
        string ans;

        for(int i=0;i<path.size();++i){
            if(path[i]=='/') continue;

            string temp;
            while(i<path.size() && path[i]!='/'){
                temp+=path[i];  //insesrt all the elemnt except / in temp
                ++i;
            }

            if(temp=="."){
                continue;
            }
            //temp[i]== .. then go one step back
            else if(temp==".."){
                if(!st.empty())
                st.pop();
            }
            else st.push(temp);
        }
        while(!st.empty())
        {
            ans="/" + st.top() + ans;
            st.pop();  ///pop the entire stack
        }

        if(ans.size()==0){
            return "/";
        }
return ans;

    }
};