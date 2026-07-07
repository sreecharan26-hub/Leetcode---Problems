class Solution {
public:
    bool isPalindrome(string s) {
        string t = "";
        int n = s.size();
        for(int i=0;i<n;i++){
            if((s[i]>='a' and s[i]<='z') or (s[i]>='A' and s[i]<='Z') or s[i]>='0' and s[i]<='9'){ 
                t+=tolower(s[i]);
            }
        }
        string a = t;
        int b = a.size();
        for(int i =0;i<b/2;i++){
            if(a[i]!=a[b-1-i]){
                return false;
            }
        }
        return true;
    }
};