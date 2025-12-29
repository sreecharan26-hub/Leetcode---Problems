class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> v;
        map<int,int>mpp;
        for(auto i :nums){
            mpp[i]++;
        }
    
        for(auto it : mpp){
            int times = min(2,it.second);
            while(times--){
                v.push_back(it.first);
            }
        }
        for(int i=0;i<v.size();i++){
            nums[i]=v[i];
        }
        return v.size();
    }
};