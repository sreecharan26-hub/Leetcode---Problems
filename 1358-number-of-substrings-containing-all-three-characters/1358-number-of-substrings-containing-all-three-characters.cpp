class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int>v(3,0);
        int n = s.size();
        int j=0;
        int ans = 0;
        for(int i=0;i<n;i++){
            v[s[i]-'a']++;
            while(v[0]>0 and v[1]>0 and v[2]>0){
                v[s[j]-'a']--;
                j++;
            }
            ans+=j;
        }
        return ans;
    }
};