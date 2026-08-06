class Solution {
public:
    int smallestNumber(int n, int t) {
        int pro = 1;
        while (pro % t != 0) {
            int temp = n;
            pro =1;

            while (temp > 0) {
                pro *= temp % 10;
                temp /= 10;
            }
                if (pro % t == 0) {
                    return n;
                } else {
                    n++;
            }
        }
        return n ;
    }
};