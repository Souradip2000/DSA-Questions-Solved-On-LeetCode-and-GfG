class MyQueue {
public:
    stack<int> st1;
    stack<int> st2;
    MyQueue() {
        
    }
    
    void push(int x) {
        st1.push(x);
    }
    
    int pop() {
      while(!st1.empty()){
          int ele=st1.top();
          st2.push(ele);
          st1.pop();
      } 
        int ans=st2.top();
      st2.pop();
        while(!st2.empty()){
            int ele=st2.top();
            st1.push(ele);
            st2.pop();
        }
       return ans; 
    }
    
    int peek() {
      while(!st1.empty()){
          int ele=st1.top();
          st2.push(ele);
          st1.pop();
      } 
        int ans=st2.top();
      //st2.pop();
        while(!st2.empty()){
            int ele=st2.top();
            st1.push(ele);
            st2.pop();
        }
       return ans;         
    }
    
    bool empty() {
       if(st1.empty() ) return true;
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */