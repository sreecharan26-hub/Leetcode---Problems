class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int balance = 0;
        for (char i : s) {
            if (i == '(') {
                if (balance > 0) {
                    ans += i;
                }
                balance++;
            } else {
                balance--;
                if (balance > 0) {
                     ans +=i;
                }
            }
        }
        return ans;
    }
};