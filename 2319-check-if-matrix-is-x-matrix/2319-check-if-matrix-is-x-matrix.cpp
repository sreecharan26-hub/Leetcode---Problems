class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j or i + j == n - 1) {
                    if(nums[i][j] == 0){
                        return false;
                    }
                } else {
                    if (nums[i][j] != 0) {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};