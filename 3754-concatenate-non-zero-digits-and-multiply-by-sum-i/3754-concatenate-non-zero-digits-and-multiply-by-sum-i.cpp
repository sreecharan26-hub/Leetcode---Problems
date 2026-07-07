class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = to_string(n);
        long long x =0;
        int sum =0;
        
        for(auto i : s){
           if(i!='0'){
            int digit = i-'0';
            sum+=digit;
            x=x*10+digit;
           } 
        }
        return x*sum;
    }
};