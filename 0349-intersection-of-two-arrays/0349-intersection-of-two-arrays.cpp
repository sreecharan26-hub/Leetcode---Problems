class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s(nums1.begin(),nums1.end());
        set<int> v;
        for(auto i : nums2){
            if(s.count(i)){
                v.insert(i);
            }
        }
         return vector<int>(v.begin(),v.end());   
    }
};