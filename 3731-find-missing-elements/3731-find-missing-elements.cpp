class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int a = *max_element(nums.begin(),nums.end());
        int b = *min_element(nums.begin(),nums.end());
        unordered_set<int> s(nums.begin(),nums.end());
        vector<int>v;
        for(int i=b;i<=a;i++){
            if(s.find(i)==s.end()){
                v.push_back(i);
            }
        }
        return v;
    }
};