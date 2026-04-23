class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int>mp;
        for(auto i : nums){
            mp[i]++;
        }
        vector<pair<int,int>>v;
        for(auto i : mp){
            v.push_back({i.second,-i.first});
        }
        sort(v.begin(),v.end());
        vector<int>ans;
        for(auto i : v){
            int freq = i.first;
            int val = -i.second;
            for(int i=0;i<freq;i++){
                ans.push_back(val);
            }
        }
        return ans;
    }
};