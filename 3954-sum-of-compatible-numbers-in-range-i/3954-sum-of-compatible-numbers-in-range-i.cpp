class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int ans = 0;
        for(int i=0;i<=n+k;i++){
            if(abs(n-i)<=k and (n&i)==0){
                ans+=i;
            }
        }
        return ans;

    }
};