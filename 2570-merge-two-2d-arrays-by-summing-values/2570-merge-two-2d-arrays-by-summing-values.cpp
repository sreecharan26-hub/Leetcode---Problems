class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        int i=0;
        int j=0;
        vector<vector<int>>v;
        while(i<nums1.size() and j<nums2.size()){
            if(nums1[i][0]==nums2[j][0]){
                v.push_back({nums1[i][0],nums1[i][1]+nums2[j][1]});
                i++;
                j++;
            }
            else if(nums1[i][0]<nums2[j][0]){
                v.push_back(nums1[i]);
                i++;
            }
            else{
                v.push_back(nums2[j]);
                j++;
            }
        }
        while(i<nums1.size()){
            v.push_back(nums1[i]);
            i++;
        }
        while(j<nums2.size()){
            v.push_back(nums2[j]);
            j++;
        }
        return v;
    }
};