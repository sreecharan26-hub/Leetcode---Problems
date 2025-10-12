class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        vector<int> even;
        vector<int> odd;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                even.push_back(nums[i]);
            }
            else{
                odd.push_back(nums[i]);
            }
        }
        vector<int> v;
        for(int i=0;i<n/2;i++){
            v.push_back(even[i]);
            v.push_back(odd[i]);
        }
        return v;
        
    }
};