class Solution {
public:
    bool checkGoodInteger(int n) {
        int sum = 0;
        int ssum = 0;
        while(n>0){
            int a = n%10;
            sum+=a;
            ssum+=a*a;
            n/=10;
        }
        return ssum-sum>=50;
    }
};