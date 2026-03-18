class Solution {
public:
    int scoreOfString(string s) {
        int n = s.size();
        int sum =0;
        for(int i=0;i<n-1;i++){
            int a =abs(s[i]-s[i+1]);
            sum+=a;
        }
        return sum;
    }
};