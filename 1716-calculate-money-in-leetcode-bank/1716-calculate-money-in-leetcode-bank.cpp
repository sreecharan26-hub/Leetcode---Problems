class Solution {
public:
    int totalMoney(int n) {
        int a= (n+6)/7;
        int cnt = 0;
        int sum = 0;
        for (int i = 1; i <= a; i++) {      
            for (int j = i; j < i + 7; j++) {  
                sum += j;
                cnt++;
                if (cnt == n)
                    return sum;
            }
        }

        return sum;
    }
};