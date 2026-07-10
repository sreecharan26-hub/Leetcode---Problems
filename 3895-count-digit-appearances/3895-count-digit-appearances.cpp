class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int n = nums.size();
        int cnt = 0;
        for(int i=0;i<n;i++){
            while(nums[i]>0){
                int a=nums[i]%10;
                nums[i]=nums[i]/10;
                if(a==digit){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};