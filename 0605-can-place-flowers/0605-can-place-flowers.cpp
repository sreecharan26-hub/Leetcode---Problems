class Solution {
public:
    bool canPlaceFlowers(vector<int>& nums, int n) {
        int a = nums.size();
        int cnt = 0;
        for(int i=0;i<a;i++){
            if(nums[i]==0 
            and (i==0 or nums[i-1]==0) and (i==a-1 or nums[i+1]==0)){
                nums[i]=1;
                cnt++;
            }
        }
        return cnt>=n;
    }
};