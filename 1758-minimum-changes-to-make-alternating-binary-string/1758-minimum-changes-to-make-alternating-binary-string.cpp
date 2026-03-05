class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        int cnt1=0,cnt2=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                if(s[i]!='0'){
                    cnt1++;
                }
            }
            else{
                if(s[i]!='1'){
                    cnt1++;
                }
            }
            if(i%2==0){
                if(s[i]!='1'){
                    cnt2++;
                }
            }
            else{
                if(s[i]!='0'){
                    cnt2++;
                }
            }
        }
        return min(cnt1,cnt2);
    }
};