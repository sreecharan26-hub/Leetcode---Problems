class StockSpanner {
public:
vector<int>a;
    StockSpanner() {
        
    }
    
    int next(int price) {
        a.push_back(price);
        int n = a.size();
        int cnt = 1;
        for(int i=n-2;i>=0;i--){
            if(a[i]<=price){
                cnt++;
            }
            else{
                break;
            }
        }
        return cnt;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */