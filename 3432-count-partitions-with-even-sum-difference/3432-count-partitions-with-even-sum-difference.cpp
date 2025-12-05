class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size();
        int sum=0;
        for(auto i : nums){
            sum+=i;
        }
        if(sum%2==0){
            return n-1;
        }
        else{
            return 0;
        }
    }
};