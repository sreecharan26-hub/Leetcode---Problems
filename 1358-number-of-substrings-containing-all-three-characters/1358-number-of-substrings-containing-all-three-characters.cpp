class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int>v(3,-1);
        int ans = 0;
        for(int i=0;i<s.size();i++){
            v[s[i]-'a']=i;
            ans+=min({v[0],v[1],v[2]})+1;
        }
        return ans;
    }
};