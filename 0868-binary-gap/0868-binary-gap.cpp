class Solution {
public:
    int binaryGap(int n) {
        int l = -1;
        int pos = 0;
        int ans = 0;
        while(n>0){
            if((n&1)==1){
                if(l != -1){
                    ans = max(ans,pos-l);
                }
                l = pos;
            }
            pos++;
            n=n>>1;
        }
        return ans;
    }
};