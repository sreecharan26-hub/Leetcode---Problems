class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int>st;
        for(auto i : nums){
            st.insert(i);
        }
        int sum=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]+1){
                sum+=nums[i];
            }
            else{
                break;
            }
        }
        while(st.find(sum)!=st.end()){
            sum+=1;
        }
        return sum;
    }
};