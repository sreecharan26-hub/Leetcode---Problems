class Solution {
public:
    int minElement(vector<int>& nums) {
        int n = nums.size();
        vector<int>v;
        for(int i=0;i<n;i++){
            int x = nums[i];
            int sum =0;
            while(x>0){
                sum+=x%10;
                x/=10;
            }
            v.push_back(sum);
        }
        
        return *min_element(v.begin(),v.end());
    }
};