class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int a = nums1.size();
        int b = nums2.size();
        int i = 0;
        int j = 0;
        vector<int> v;
        while (i < a and j < b) {
            if (nums1[i] < nums2[j]) {
                v.push_back(nums1[i]);
                i++;
            } else {
                v.push_back(nums2[j]);
                j++;
            }
        }
        while (i < a) {
            v.push_back(nums1[i]);
            i++;
        }
        while (j < b) {
            v.push_back(nums2[j]);
            j++;
        }
        int n = a+b;
        if(n%2==1){
            return v[n/2];
        }
        else{
            return (double)((double) (v[n/2])+(double)(v[n/2 - 1]))/2.0; 
        }
    }
};