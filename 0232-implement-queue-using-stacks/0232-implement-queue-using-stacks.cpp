class MyQueue {
public:
    stack<int>st;
    MyQueue() {
        
    }
    
    void push(int x) {
        st.push(x);
        
    }
    
    int pop() {
        int x = st.top();
        st.pop();
        if(st.empty()){
            return x;
        }
        int item = pop();
        st.push(x);
        return item;
        
    }
    
    int peek() {
        int x = st.top();
        st.pop();
        if(st.empty()){
            st.push(x);
            return x;
        }
        int item = peek();
        st.push(x);
        return item;  
    }
    
    bool empty() {
        return st.empty();
        
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