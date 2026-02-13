class Solution {
public:
    double myPow(double x, int n) {
        long long a=n;
        if(a<0){
            x=1/x;
            a=-a;
        }
        double res = 1.0;
        while(a>0){
            if(a%2==1){
                res=res*x;
            }
         
            x=x*x;
            a/=2;
        }
        return res;
    }
};