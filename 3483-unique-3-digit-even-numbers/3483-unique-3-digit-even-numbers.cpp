class Solution {
public:
    int totalNumbers(vector<int>& nums) {
        set<int>s;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                continue;
            }
            for(int j=0;j<n;j++){
                if(j==i){
                    continue;
                }
                for(int k=0;k<n;k++){
                    if(k==i or k==j){
                        continue;
                    }
                    if(nums[k]%2!=0){
                        continue;
                    }
                    int ans = nums[i]*100+nums[j]*10+nums[k];
                    s.insert(ans);
                }
            }
        }
        return s.size();
    }
};