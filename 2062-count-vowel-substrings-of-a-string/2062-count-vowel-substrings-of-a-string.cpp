class Solution {
public:
    int countVowelSubstrings(string s) {
        int n = s.size();
        int cnt = 0;
        for(int i=0;i<n;i++){
            set<char>st;
            for(int j=i;j<n;j++){
                if(s[j]!='a' and s[j]!='e' and s[j]!='i' and s[j]!='o' and s[j]!='u'){
                    break;
                }
                st.insert(s[j]);
                if(st.size()==5){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};