class StockSpanner {
public:
stack<pair<int,int>>st;
int idx = -1;
    StockSpanner() {
        
    }
    
    int next(int price) {
        idx = idx+1;
        while(!st.empty() and st.top().first<=price){
            st.pop();
        }
        int ans = idx-(st.empty() ? -1:st.top().second);
        st.push({price,idx});
        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */