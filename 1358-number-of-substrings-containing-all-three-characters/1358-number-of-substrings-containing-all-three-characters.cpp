class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int>v(3,-1);
        int cnt = 0;
        for(int i=0;i<s.size();i++){
            v[s[i]-'a']=i;
            if(v[0]!=-1 and v[1]!=-1 and v[2]!=-1){
                cnt+=1+min({v[0],v[1],v[2]});
            }
        }
        return cnt;
    }
};