class Solution {
public:
    int maximumSetSize(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(); 

        unordered_set<int>s1(nums1.begin(),nums1.end());
        unordered_set<int>s2(nums2.begin(),nums2.end());
        int a = s1.size();
        int b = s2.size();

        int p = min(a,n/2);
        int q = min(b,n/2);
        unordered_set<int>st;
        for(auto i : s1){
            st.insert(i);
        }
        for(auto i : s2){
            st.insert(i);
        }
        int l = st.size();
        return min(l,p+q);

    }
};