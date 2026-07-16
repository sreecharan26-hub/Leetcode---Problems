class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        int mx = 0;
        vector<int>v=nums;
        vector<long long>a(n);
        for(int i=0;i<n;i++){
            mx = max(nums[i],mx);
            a[i]=gcd(nums[i],mx);
        }
        sort(a.begin(),a.end());
        int l = 0;
        int r= a.size()-1;
        long long sum = 0;
        while(l<r){
           sum+=gcd(a[l],a[r]);
           l++;
           r--;
        }
        return sum;

    }
};