class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        int m = t.size();
        vector<int>v(256,0);
        int l =0;
        int r = 0;
        int cnt = 0;
        int sidx = -1;
        int minlen = INT_MAX;
        for(int i=0;i<m;i++){
            v[t[i]]++;
        }
        while(r<n){
            if(v[s[r]]>0){
                cnt = cnt+1;
            }
            v[s[r]]--;
            while(cnt == m){
                if(r-l+1 < minlen){
                    minlen = r-l+1;
                    sidx = l;
                }
                v[s[l]]++;
                if(v[s[l]]>0){
                    cnt=cnt-1;
                }
                l=l+1;
            }
            r=r+1;
        }
        return sidx==-1 ? "" : s.substr(sidx,minlen);
    }
};