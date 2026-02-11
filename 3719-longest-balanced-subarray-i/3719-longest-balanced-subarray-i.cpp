class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int maxlen = 0;
        for(int i=0;i<nums.size();i++){
            unordered_map<int,int>even;
            unordered_map<int,int>odd;
            for(int j=i;j<nums.size();j++){
                if(nums[j]%2==0){
                    even[nums[j]]=true;
                }
                else{
                    odd[nums[j]]=true;
                }
                int evencnt = even.size();
                int oddcnt = odd.size();

                if(evencnt == oddcnt){
                    maxlen = max(maxlen,j-i+1);
                }
            }
        }
        return maxlen;
    }
};