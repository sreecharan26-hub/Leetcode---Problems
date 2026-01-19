class Solution {
public:
    string reverseWords(string s) {
        int n  = s.size();
        int i = n-1;
        string ans = "";
        while(i>=0){
            while(i>=0 and s[i]==' '){
                i--;
            }
            if(i<0) break;
            int end = i;
            while(i>=0 and s[i]!=' '){
                i--;
            }
            string a = s.substr(i+1,end-i);
            if(!ans.empty()){
                ans+=" ";
            }
            ans+=a;
        }
        return ans;
    }
};