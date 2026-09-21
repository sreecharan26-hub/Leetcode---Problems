class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int cnt = 0;
        for(int i = 0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i][1]>=nums[j][0]){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};