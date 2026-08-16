class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& nums) {
        int n = nums.size();
        vector<pair<int,int>>v;
        for(int i=1;i<n;i++){
            int a  = nums[i][1] - nums[i-1][1];
            int b = nums[i][0]-nums[i-1][0];
            v.push_back({a,b});
        }
        for(int i=1;i<v.size();i++){
            if(v[i].first * v[i-1].second != v[i-1].first * v[i].second){
                return false;
            }
        }
        return true;
    }
};