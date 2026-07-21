class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        s="1"+s+"1";
        int n = s.size();
        vector<int>t;
        vector<int>cnt;
        int i=0;
        while(i<n){
            int j=i;
            while(j<n and s[j]==s[i]){
                j++;
            }
                t.push_back(s[i]-'0');
                cnt.push_back(j-i);
                i=j;
            
        }
        int ones = 0;
        for(auto i : s){
            if(i=='1'){
                ones++;
            }
        }
        ones-=2;
        int ans = ones;
        for(int i=1;i<t.size()-1;i++){
            if(t[i]==1 and t[i+1]==0 and t[i-1]==0){
                ans= max(ans,ones+cnt[i-1]+cnt[i+1]);
            }
        }
        return ans;

    }
};