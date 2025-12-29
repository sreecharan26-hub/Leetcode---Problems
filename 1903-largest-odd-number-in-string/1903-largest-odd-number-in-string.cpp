class Solution {
public:
    string largestOddNumber(string num) {
        string ans = "";
        int n = num.size();
        for (int i = n - 1; i >= 0; i--) {
            int digit = num[i] - '0'; // ascii
            if (digit % 2 == 1) {
                for (int j = 0; j <= i; j++) {
                    ans += num[j];
                }
                return ans;
            }
        }
        return "";
    }
};