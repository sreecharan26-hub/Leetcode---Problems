class Solution {
public:
    int maxFreqSum(string s) {
        int n = s.size();
        vector<int>v(26,0);
        vector<int>a(26,0);
        for(int i=0;i<n;i++){
            if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u'){
                v[s[i]-'a']++;
            }
            else{
                a[s[i]-'a']++;
            }
        }
        int maxv=0;
        int maxc=0;
        for(int i=0;i<26;i++){
            maxv=max(maxv,v[i]);
            maxc=max(maxc,a[i]);
        }
        return maxc+maxv;
    }
};