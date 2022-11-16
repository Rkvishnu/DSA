class MyStack {
    queue<int>q;

public
    void push(int x) {
      int n =q.size();
      q.push(x);
      for(int i=0;i<n;i++){
          int value= q.front();
          q.pop();
          q.push(value);
      }
    }
    int pop() {
        
        int value= q.front();
        q.pop();
        return value;
    }
    
    int top() {
        return q.front();
    }
    
   int size(){
       return q.size();
   }
bool  empty(){
       return q.empty();
   }
};