class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n= nums.size();
        int pos=0,neg=1;
        vector<int>v(n);
        for(auto i : nums){
            if(i>0){
                v[pos]=i;
                pos+=2;
            }
            else{
                v[neg]=i;
                neg+=2;
            }
        }
        return v;
    }
};