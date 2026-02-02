class Solution {
public:
    bool checkZeroOnes(string s) {
        if(s.size()==1 and s[0]=='1'){
            return true;
        }
        int n = s.size();
        int cnt = 1;
        int cnt1 = 0;
        int cnt0 = 1;
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){
                cnt++;
            }
            else{
                if(s[i-1]=='1'){
                    cnt1=max(cnt1,cnt);
                }
                else{
                    cnt0=max(cnt0,cnt);
                }
                cnt=1;
            }
        }
        if(s.back()=='1'){
            cnt1=max(cnt1,cnt);
        }
        else{
            cnt0=max(cnt0,cnt);
        }
        return cnt1>cnt0;
    }
};