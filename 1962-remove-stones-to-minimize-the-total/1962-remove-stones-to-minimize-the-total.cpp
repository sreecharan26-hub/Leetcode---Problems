class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<long long>pq;
        for(auto i : piles){
            pq.push(i);
        }
        while(k--){
            long long top = pq.top();
            pq.pop();
            long long val = (top+1)/2;
            pq.push(val);
        }
        long long ans =0;
        while(!pq.empty()){
            ans+=pq.top();
            pq.pop();
        }
        return ans;
    }
};