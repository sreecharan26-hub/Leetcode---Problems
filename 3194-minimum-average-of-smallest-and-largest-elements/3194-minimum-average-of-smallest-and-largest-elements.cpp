class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<float>v;
        int i = 0;
        int j = n-1;
        while(i<j){
            float a = (float)(nums[i]+nums[j])/2;
            v.push_back(a);
            i++;
            j--;
        }
        return *min_element(v.begin(),v.end());
    }
};