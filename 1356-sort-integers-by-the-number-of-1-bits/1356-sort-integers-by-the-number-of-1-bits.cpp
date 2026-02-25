class Solution {
public:
    vector<int> sortByBits(vector<int>& nums) {
        vector<pair<int,int>>v;
        for(int i=0;i<nums.size();i++){
            int cnt = 0;
            int x = nums[i];
            while(x>0){
                if((x & 1)==1){
                   cnt++;
                }
                x= x>>1;
            }
            v.push_back({cnt,nums[i]});    
        }
        sort(v.begin(),v.end());
        vector<int>a;
        for(int i=0;i<v.size();i++){
            a.push_back(v[i].second);
        }
        return a;
    }
};