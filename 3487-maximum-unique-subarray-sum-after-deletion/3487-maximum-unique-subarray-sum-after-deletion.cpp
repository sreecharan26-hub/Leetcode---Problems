class Solution {
public:
    int maxSum(vector<int>& nums) {
        int a = *max_element(nums.begin(),nums.end());
        if(a<0){
            return a;
        }
        int sum =0;
        unordered_set<int>st(nums.begin(),nums.end());
        for(auto i : st){
            if(i>0){
                sum+=i;
            }
        }
        return sum;
    }
};