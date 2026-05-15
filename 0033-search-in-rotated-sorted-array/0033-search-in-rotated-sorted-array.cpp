class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            auto it = find(nums.begin(),nums.end(),target);
            if(it!= nums.end()){
                return it-nums.begin();
            }
        }
        return -1;
    }
};