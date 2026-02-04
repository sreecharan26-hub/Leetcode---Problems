class Solution {
public:
    static bool compare(vector<int>&a , vector<int>&b){
        return a[1]>b[1];
    }
    int maximumUnits(vector<vector<int>>& nums, int truckSize) {
        sort(nums.begin(),nums.end(),compare);
        int ans = 0;
        for(auto &i : nums){
            int a = min(truckSize,i[0]);
            ans+=a*i[1];
            truckSize-=a;
        }
        return ans;
    }
};