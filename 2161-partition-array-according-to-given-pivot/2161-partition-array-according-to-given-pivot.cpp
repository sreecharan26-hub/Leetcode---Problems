class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> less;
        vector<int> more;
        vector<int> pivott;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] < pivot) {
                less.push_back(nums[i]);
            } else if (nums[i] > pivot) {
                more.push_back(nums[i]);
            } else {
                pivott.push_back(nums[i]);
            }
        }
        vector<int> v;
        for (int i = 0; i < less.size(); i++) {
            v.push_back(less[i]);
        }
        for (int i = 0; i < pivott.size(); i++) {
            v.push_back(pivott[i]);
        }
        for (int i = 0; i < more.size(); i++) {
            v.push_back(more[i]);
        }

        return v;
    }
};