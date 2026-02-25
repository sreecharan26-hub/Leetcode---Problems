class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>v;
        for(int i=0;i<n;i++){
            
            int cnt = 0;
            int x = nums[i];
            while(x>0){
                if((x&1)==1){
                    cnt++;
                }
                x=x>>1;
            }
            v.push_back(cnt);
        }
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(v[j]==v[j+1] and nums[j]>nums[j+1]){
                    swap(nums[j],nums[j+1]);
                }
            }
        }
        
        for(int i=0;i<n-1;i++){
           if(nums[i]>nums[i+1]){
             return false;
           }
        }
        return true;
    }
};