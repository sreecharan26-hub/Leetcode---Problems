class Solution {
public:
    vector<int> asteroidCollision(vector<int>& nums) {
        int n  = nums.size();
        vector<int>v;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                v.push_back(nums[i]);
            }
            else{
                while(!v.empty() and v.back()>0 and v.back()<abs(nums[i])){
                    v.pop_back();
                }
                    if(!v.empty()  and v.back()==abs(nums[i])){
                        v.pop_back();
                    }
                    else if(v.empty() or v.back()<0){
                        v.push_back(nums[i]);
                    }
                }
            }
        
        return v;
    }
};