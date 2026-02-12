class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>ans;
        int n = l.size();
        for(int i=0;i<n;i++){
            vector<int> v;
            for(int j=l[i];j<=r[i];j++){
                v.push_back(nums[j]);
            }
            sort(v.begin(),v.end());
            // if(v.size()<=2){
            //     ans.push_back(1);
            //     continue;
            // }
            int diff = v[1]-v[0];
            int k;
            for(k=2;k<v.size();k++){
                if(v[k]-v[k-1]!=diff){
                    ans.push_back(0);
                    break;
                }
            }
            if(k==v.size()){
                ans.push_back(1);
            }
        } 
        return ans;       
    }
};