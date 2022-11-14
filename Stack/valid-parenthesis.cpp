class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;

        for(auto i: s){
            if(stk.empty() || i=='('|| i=='[' || i=='{'){
                stk.push(i);
            }
            else{
                if
                (
                (i==')' && stk.top()!='(')||
                (i==']' && stk.top()!='[')||
                (i=='}' && stk.top()!='{')
                )
                {
                return false; 
                }
            stk.pop();
            }
        }
        //check if is stack is empty then return true else false
        return  stk.empty();
    }
};