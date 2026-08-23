class Solution {
public:
    bool isPalindromic(string s) {
        string a = "";
        for(auto ch : s){
            for(int i=7;i>=0;i--){
                a+=((ch>>i)&1)+'0';
            }
        }
        string rev = a;
        string b = "";
        for(int i =a.size()-1;i>=0;i--){
            b+=a[i];
        }
        if(a==b){
            return true;
        }
        return false;
    }
};