class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> neg;
        vector<int> pos;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>=1){
                pos.push_back(nums[i]);
            }
            else{
                neg.push_back(nums[i]);
            }
        }
        vector<int> v;
        for(int i = 0;i<n/2;i++){
            v.push_back(pos[i]);
            v.push_back(neg[i]);
        }

        return v;

        
    }
};