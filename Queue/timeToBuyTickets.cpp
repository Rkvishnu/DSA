class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int>qu;
        int n =tickets.size();
        int count=0;

        for(int i=0;i<n;i++)
            qu.push(i);
        
        while(!qu.empty()){
            ++count;
            int temp= qu.front();
            qu.pop();
            if(tickets[temp]>=1){
                tickets[temp]-=1;
            }
            if(temp!=k && tickets[temp]==0)continue;
            if(temp==k && tickets[temp]==0) break;

            qu.push(temp);
        }
        return count;
    }
};