class Solution {
public:
    int countHomogenous(string s) {
        int n = s.length();
        long long sum = 0;
        long long cnt = 0;
        int mod = 1e9+7;
        for(int i=0;i<n;i++){
            if(i>0 and s[i]==s[i-1]){
                cnt++;
            }
            else{
                cnt =1;
            }
            sum=(sum+cnt)%mod;

        }
        return sum;
    }
};