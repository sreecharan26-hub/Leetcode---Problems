class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<long long>pq;
        for(auto i: nums){
            pq.push(i);
        }
        long long ans = 0;
        while(k--){
            long long top = pq.top();
            pq.pop();
            ans+=top;
            long long val = (top+2)/3;
            pq.push(val);
        }
        return ans;
    }
};