class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int a = 0;
        for(int i=0;i<n;i++){
            if(i>a){
                return false;
            }
            else{
                a = max(a,i+nums[i]);
                if(a>=n-1){
                    return true;
                }
            }
        }
        return false;
    }
};