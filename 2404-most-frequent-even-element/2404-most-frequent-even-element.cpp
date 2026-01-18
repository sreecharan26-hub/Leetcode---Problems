class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>mpp;
        for(auto i : nums){
            if(i%2==0){
                mpp[i]++;
            }
        }
        int count =0;
        int ans =-1;
        for(auto it : mpp){
            if(it.second>count){
                count = it.second;
                ans = it.first;
            }
        }
        return ans;
    }
};