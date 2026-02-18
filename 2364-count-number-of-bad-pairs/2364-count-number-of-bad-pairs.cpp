class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        int n = nums.size();
        unordered_map<long long,long long>mp;
        long long goodpair = 0;
        for(long long i=0;i<n;i++){
            long long a = nums[i]-i;
            if(mp.count(a)){
                goodpair+=mp[a];
            }
            mp[a]++;
        }
        long long total = (long long)n*(n-1)/2;
        return total - goodpair;
    }
};