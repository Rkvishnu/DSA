 class Solution {
public:
    int calPoints(vector<string>& ops)
    {
        int value1;
        int value2;
        int ans = 0;
        stack<int>stk;  
        for(string i:ops)
        {
            //remove from stack
            if(i == "C")
            {
                stk.pop();
            }
            //double the value and push again
            else if(i == "D")
            {
                stk.push(stk.top()*2);
            }
            // add previous + current element
            else if(i == "+")
            {
                value1 = stk.top();
                stk.pop();
                value2 = stk.top();
                stk.push(value1);
                stk.push(value1 + value2);
            }
            else
            {
                stk.push(stoi(i)); //stoi() to convert string into integer 
            }
        }
        while(stk.size() != 0)
        {
            ans += stk.top();
            stk.pop();
        }
        return ans;
    }
};