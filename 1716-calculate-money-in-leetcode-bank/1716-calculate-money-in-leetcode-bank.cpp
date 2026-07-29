class Solution {
public:
    int totalMoney(int n) {
        int a= n/2+1;
        int sum= 0;
        int cnt = 0;
        for(int i=1;i<=a;i++){
            for(int j =i;j<7+i;j++){
                sum+=j;
                cnt++;
                if(cnt==n){
                    return sum;
                }
            }
        }
        return 0;
    }
};