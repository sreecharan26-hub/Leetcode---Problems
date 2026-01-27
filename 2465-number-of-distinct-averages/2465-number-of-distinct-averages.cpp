class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        vector<double>v;
        
        sort(nums.begin(),nums.end());
        while(nums.size()>1){
            double avg=(nums.front()+nums.back())/2.0;
            v.push_back(avg);
            nums.erase(nums.begin());
            nums.pop_back();
        }
        map<double,int>mpp;
        for(auto i:v){
            mpp[i]++;
        }
        return mpp.size();
    }
};