class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n = *max_element(nums.begin(),nums.end());
        int m = *min_element(nums.begin(),nums.end());

        int ans = 1;
        for(int i=1;i<=min(m,n);i++){
            if(m%i==0 and n%i==0){
                ans=i;
            }
        }
        return ans;
    }
};