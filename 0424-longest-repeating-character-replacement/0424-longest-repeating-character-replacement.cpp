class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>hash(26,0);
        int l =0;
        int ans = 0;
        int maxf = 0;
        for(int r= 0;r<s.size();r++){
            hash[s[r]-'A']++;
            maxf= max(maxf,hash[s[r]-'A']);

            while(r-l+1 - maxf> k){
                hash[s[l]-'A']--;
                l++;
            }
            ans = max(ans,r-l+1);
        }
        return ans;
    }
};