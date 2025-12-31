class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>v;
        v.push_back({});
        for(auto it : nums){
            int n = v.size();
            for(int i=0;i<n;i++){
                vector<int>a = v[i];
                a.push_back(it);
                v.push_back(a);
            }
        }
        return v;
    }
};