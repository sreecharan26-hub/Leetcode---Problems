class Solution {
public:
    bool isPerfectSquare(int num) {
        double n = num;
        double c = sqrt(num);
        if(c == int(c)){
            return 1;
        }
        return 0;
    }
};