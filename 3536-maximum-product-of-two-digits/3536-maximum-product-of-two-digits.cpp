class Solution {
public:
    int maxProduct(int n) {
        string s = to_string(n);
        sort(s.begin(),s.end());
        int a = s.size();
        return(s[a-1]-'0')*(s[a-2]-'0');
    }
};