class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int a = *max_element(weights.begin(), weights.end());
        int b = 0;
        for (auto i : weights) {
            b += i;
        }
        
        while (a <= b){
            int mid = (a+b)/2;
            int day = 1, load = 0;
            for (int i = 0; i < n; i++) {
                if (load + weights[i] > mid) {
                    day++;
                    load = weights[i];
                } else {
                    load += weights[i];
                }
            }
            if (day <= days){
                
                b = mid - 1;
            }
            else{
                a = mid +1;
            }
        }
        return a; 
    }
};