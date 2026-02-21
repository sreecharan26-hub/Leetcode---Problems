class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        vector<int> v;
        int ans = 0;
        for (int i = left; i <= right; i++) {
            int cnt = 0;
            int temp = i;
            while (temp > 0) {
                if ((temp & 1) == 1) {
                    cnt++;
                }
                temp = temp >> 1;
            }
            v.push_back(cnt);
        }
        for (int i = 0; i < v.size(); i++) {
            if (v[i] < 2) {
                continue;
            }
            int j;
            for (j = 2; j * j <= v[i]; j++) {
                if (v[i] % j == 0) {
                    break;
                }
            }
            if (j * j > v[i]) {
                ans++;
            }
        }
        return ans;
    }
};