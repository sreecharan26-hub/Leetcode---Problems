class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int>v(3,0);
        int l=0;
        int ans = 0;
        for(int r=0;r<s.size();r++){
            v[s[r]-'a']++;
            while(v[0]>0 and v[1]>0 and v[2]>0){
                v[s[l]-'a']--;
                l++;
            }
            ans+=l;
        }
        return ans;
    }
};