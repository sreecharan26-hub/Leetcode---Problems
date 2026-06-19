class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>v;
        int sum =0;
        v.push_back(sum);
        for(auto i : gain){
            sum+=i;
            v.push_back(sum);
        }
        return *max_element(v.begin(),v.end());
    }
};