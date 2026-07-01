class Solution {
public:
    bool consecutiveSetBits(int n) {
        int prev=0;
        int cnt =0;
        while(n>0){
            int curr = n&1;
            if(curr==1 and prev ==1){
                cnt++;
                if(cnt>1){
                    return false;
                }
            }
            prev = curr;
            n>>=1;
        }
        return cnt ==1;
    }
};