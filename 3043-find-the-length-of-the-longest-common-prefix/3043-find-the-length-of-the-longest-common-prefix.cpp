class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<string> st;

        int ans = 0;
        for(auto i : arr1){
            string s = to_string(i);
            string pref="";
            for(auto j : s){
                 pref+=j;
                 st.insert(pref);   
            }
        }
        for(auto i : arr2){
            string s = to_string(i);
            string pref ="";
            for(auto j : s){
                pref+=j;
                if(st.count(pref)){
                    ans = max(ans,(int)pref.size());
                }
                else{
                    break;
                }
            }
        }
        return ans;
    }
};