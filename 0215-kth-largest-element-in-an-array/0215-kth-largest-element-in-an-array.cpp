class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for(auto i:nums){
            pq.push(i);
        }

        int i=1;
        while(!pq.empty()){
            if(i == k){
                return pq.top();
            }
            pq.pop();
            i++;
        }

        return pq.top();
    }
};