class Solution {
public:
    string reverseVowels(string s) {
        int n = s.size();
        int l = 0, r = n - 1;
        while (l < r) {
            while (l < r and !(s[l] == 'a' or s[l] == 'e' or s[l] == 'i' or
                   s[l] == 'o' or s[l] == 'u' or s[l] == 'A' or s[l] == 'E' or
                   s[l] == 'I' or s[l] == 'O' or s[l] == 'U')){
            l++;
        }
            while (l < r and !(s[r] == 'a' or s[r] == 'e' or s[r] == 'i' or
                   s[r] == 'o' or s[r] == 'u' or s[r] == 'A' or s[r] == 'E' or
                   s[r] == 'I' or s[r] == 'O' or s[r] == 'U')){
            r--;
        }
            if (l < r) {
                swap(s[l], s[r]);
                l++;
                r--;
            }
        }
        return s;
    }
};