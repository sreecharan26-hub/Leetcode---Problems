class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int a = nums1.size();
        int b = nums2.size();
        vector<int>v;
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                if(nums1[i]==nums2[j]){
                    int k;
                    for( k=j+1;k<b;k++){
                        if(nums2[k]>nums2[j]){
                            v.push_back(nums2[k]);
                            break;
                        }
                    }
                    if(k==b){
                        v.push_back(-1);
                    }
                    break;
                }
            
            }
        }
        return v;
    }
};