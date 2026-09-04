class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        if(n==1){
            return true;
        }
        for(auto i : nums1){
            if(i%2==0){
                return true;
            }
        }
        return true;
    }
};