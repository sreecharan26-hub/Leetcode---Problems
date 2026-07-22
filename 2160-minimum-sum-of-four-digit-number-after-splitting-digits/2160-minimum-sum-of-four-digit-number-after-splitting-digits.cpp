class Solution {
public:
    int minimumSum(int num) {
        string s = to_string(num);
        string a = "";
        sort(s.begin(),s.end());
        a+=s[0];
        a+=s[3];
        a+=s[1];
        a+=s[2];

        int x = stoi(a.substr(0,2));
        int y = stoi(a.substr(2,2));

        return x+y;
    }
};