class Solution {
public:
    int minimumSum(int num) {
        string s = to_string(num);
        string a = "";
        sort(s.begin(),s.end());
        int x = (s[0]-'0')*10 + (s[3]-'0');
        int y = (s[1]-'0')*10 + (s[2]-'0');

        return x+y;
    }
};