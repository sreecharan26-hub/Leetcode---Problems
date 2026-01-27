class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n = nums.size();
        int ans =1;
        while(1){
            int sum = ans;
            int i=0;
            for(i=0;i<n;i++){
                sum+=nums[i];
                if(sum<1){
                    break;
                }
            }
            if(i==n){
                return ans;
            }
            ans++;
        }
    }
};