class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size();
        set<int>s;
        for(auto i : nums){
            if(s.count(i)==1){
                return i;
            }
            s.insert(i);
        }
        return -1;
    }
};