class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        string pref = s[0];
        int p = pref.size();
        int n = s.size();
        for(int i=1;i<n;i++){
            int j =0;
            while(j<p and j<s[i].size() and pref[j]==s[i][j]){
                j++;
            }
            pref = pref.substr(0,j);
            if(pref == ""){
                return "";
            }
        }
        return pref;
    }
};