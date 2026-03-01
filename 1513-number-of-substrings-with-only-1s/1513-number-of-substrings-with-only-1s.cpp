class Solution {
public:
    int numSub(string s) {
        int n = s.size();
        long long sum =0;
        long long cnt =0;
        int mod = 1e9+7;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                cnt++;
            }
            else{
                cnt =0;
            }
            sum=(sum+cnt)%mod;
        }
        return sum;
    }
};