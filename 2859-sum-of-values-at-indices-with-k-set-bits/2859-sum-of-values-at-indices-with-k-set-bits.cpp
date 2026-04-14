class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>v;
        for(int i=0;i<n;i++){
            int x = i;
            int cnt=0;
            while(x>0){
                cnt+=(x&1==1);
                x>>=1;
            }
            v.push_back(cnt);
        }
        int sum = 0;
        for(int i=0;i<v.size();i++){
            if(v[i]==k){
                sum+=nums[i];
            }
        }
        return sum;
    }
};