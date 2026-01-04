class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for (auto i : nums) {
            vector<int> v;
            for (int j = 1; j * j <= i; j++) {
                if (i % j == 0) {
                    v.push_back(j);
                    if (j != i / j) {
                        v.push_back(i / j);
                    }
                }
            }

            if (v.size() == 4) {
                for (auto k : v) {
                    sum += k;
                }
            }
        }

        return sum;
    }
};