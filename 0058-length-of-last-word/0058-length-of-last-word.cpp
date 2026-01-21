class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int i = n - 1;
        int length =0;
    
            while (i >= 0 and s[i] == ' ') {
                i--;
            }
        
            while (i >= 0 and s[i] != ' ') {
                length++;
                i--;
            }
            return length;
        }
    };