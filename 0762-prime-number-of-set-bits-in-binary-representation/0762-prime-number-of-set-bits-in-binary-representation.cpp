class Solution {
public:
    bool isPrime(int n){
        if(n < 2) return false;
        for(int i = 2; i*i <= n; i++){
            if(n % i == 0) return false;
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int ans = 0;
        for(int i=left;i<=right;i++){
            int cnt = 0;
            int temp = i;
            while(temp>0){
                if(temp&1){
                    cnt++;
                }
                temp = temp>>1;
            }
            if(isPrime(cnt)){
                ans++;
            }
        }
        return ans;
        
    }
};