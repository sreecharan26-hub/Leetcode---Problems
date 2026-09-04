class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int a= *min_element(nums.begin(),nums.end());
        int b= *max_element(nums.begin(),nums.end());
        int x= 0,y= 0;
        for(int i=0;i<n;i++){
            if(nums[i]==a){
                x=i;
            }
            if(nums[i]==b){
                y=i;
            }
        }
        int l = min(x,y);
        int r = max(x,y);
        int ans1 = r+1;
        int ans2 = n-l;
        int ans3 = l+1+n-r;

        return min({ans1,ans2,ans3});
    }
};