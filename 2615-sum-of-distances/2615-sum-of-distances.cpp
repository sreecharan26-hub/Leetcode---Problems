class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        int n = nums.size();
        vector<long long>v(n,0);
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]].push_back(i);
        }
        for(auto &i : mp){
            vector<int>& pos = i.second;
            int m = pos.size();

            vector<long long>prefix(m,0);
            prefix[0]= pos[0];
            for(int i=1;i<m;i++){
                prefix[i]=prefix[i-1]+pos[i];
            }
            for(int i=0;i<m;i++){
                long long left =0,right=0;
                if(i>0){
                    left = (long long)pos[i]*i-prefix[i-1];
                }
                if(i<m-1){
                    right = (prefix[m-1]-prefix[i])-(long long)pos[i]*(m-i-1);

                }
                v[pos[i]]= left+right;
            }
        }
        return v;
    }
};