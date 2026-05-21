class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int>st;
         for(auto i : arr1){
            while(i>0){
                st.insert(i);
                i/=10;
            }
         }
         int ans = 0;
         for(auto i : arr2){
            while(i>0){
                if(st.count(i)){
                    ans = max(ans,(int)to_string(i).size());
                    break;
                }
                i/=10;
            }
         }
         return ans;
    }
};