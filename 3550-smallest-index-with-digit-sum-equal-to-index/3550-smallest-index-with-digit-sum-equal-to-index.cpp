class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        int ans = -1;
        for(int i=0;i<n;i++){
            int x = nums[i];
            int sum = 0;
            while(x>0){
                int a = x%10;
                sum+=a;
                x/=10;
            }
            if(sum==i){
            return sum;
            }
        }
        return -1;
    }
};