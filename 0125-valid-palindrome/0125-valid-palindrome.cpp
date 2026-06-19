class Solution {
public:
    bool isPalindrome(string s) {
        string a = "";
        for(auto i : s){
            if((i>='a' and i<='z') or (i>='A' and i<='Z') or (i>='0' and i<='9')){
                a+=tolower(i);
            }
        }
        string b = a;
        reverse(b.begin(),b.end());
        return b==a;
    }
};