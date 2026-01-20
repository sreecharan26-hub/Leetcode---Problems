class Solution {
public:
    int reverseDegree(string s) {
        int n = s.size();
        int ans = 0;
        for(int i=0;i<n;i++){
            int rev = 26-(s[i]-'a');
            ans+=rev*(i+1);
        }
        return ans;
    }
};