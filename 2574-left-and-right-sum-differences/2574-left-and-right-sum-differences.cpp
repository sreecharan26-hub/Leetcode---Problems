class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int>l(n),r(n),v(n);
        int sum = 0;
        for(int i=0;i<n;i++){
            l[i]=sum;
            sum+=nums[i];
        }
        sum = 0;
        for(int i=n-1;i>=0;i--){
            r[i]=sum;
            sum+=nums[i];
        }
        for(int i=0;i<n;i++){
            v[i]=abs(l[i]-r[i]);
        }
        return v;
    }
};