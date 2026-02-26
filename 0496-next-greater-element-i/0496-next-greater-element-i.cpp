class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int b = nums2.size();
        stack<int>st;
        unordered_map<int,int>mp;
        for(int i=b-1;i>=0;i--){
            while(!st.empty() and st.top()<=nums2[i]){
                st.pop();
            }
            if(st.empty()){
                mp[nums2[i]]=-1;
            }
            else{
                mp[nums2[i]]=st.top();
            }
            st.push(nums2[i]);
        }
        vector<int>v;
        for(auto i : nums1){
            v.push_back(mp[i]);
        }
        return v;
    }
};