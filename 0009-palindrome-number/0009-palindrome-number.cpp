class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int n = s.size();
        int i=0;
        int j=n-1;

        while(i<=j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};