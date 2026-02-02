class Solution {
public:
    int maximumCandies(vector<int>& nums, long long k) {
        int h = *max_element(nums.begin(),nums.end());
        int l =1;
        int ans =0;
        while(l<=h){
            int mid = (l+h)/2;
            long long children = 0;
            for(auto i : nums){
                children+=i/mid;
            }
            if(children>=k){
                ans = mid;
                l=mid+1;
            }
            else{ 
               h=mid-1;
            }
        }
        return ans;
        
    }
};