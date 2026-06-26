class Solution {
public:
    int addMinimum(string word) {
        string s = "abc";
        int j = 0;
        int cnt = 0;
        while (j < word.size()) {
            for (int i = 0; i < 3; i++) {
                if (word[j] == s[i]) {
                    j++;
                }
                else{
                    cnt++;
                }
            }
        }
        return cnt;
    }
};