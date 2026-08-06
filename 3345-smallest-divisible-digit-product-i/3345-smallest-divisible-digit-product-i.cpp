class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i=n;;i++){
            int temp = i;
            int pro = 1;
            while(temp>0){
                pro*=temp%10;
                temp/=10; 
            }
            if(pro%t==0){
                return i;
            }
        }
        return 0;
    }
};