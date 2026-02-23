class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n = s.size();
        if(n<k){
            return false;
        }
        unordered_set<string>st;
        for(int i=0;i<=n-k;i++){
            st.insert(s.substr(i,k));
        }
        if(st.size()==(1<<k)){
            return true;
        }
        return false;
    }
};