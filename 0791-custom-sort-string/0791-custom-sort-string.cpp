class Solution {
public:
    string customSortString(string order, string s) {
        vector<char>v(26,0);
        for(auto i : s){
            v[i-'a']++;
        }
        string ans = "";
        for(auto i : order){
            while(v[i-'a']>0){
                ans+=i;
                v[i-'a']--;
            }
        }
        for(int i=0;i<26;i++){
            while(v[i]>0){
                ans+=(char)(i+'a');
                v[i]--;
            }
        }
        return ans;
    }
};