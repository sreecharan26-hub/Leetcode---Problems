class Solution {
public:
    int minDays(vector<int>& bloomday, int m, int k) {
        int low = *min_element(bloomday.begin(), bloomday.end());
        int high = *max_element(bloomday.begin(), bloomday.end());
        int ans = -1;
        if (bloomday.size() < (long long)m * k) {
            return -1;
        }
        while (low <= high) {
            int mid = (low + high) / 2;
            int count = 0;
            int bouke = 0;
            for (int i = 0; i < bloomday.size(); i++) {
                if (bloomday[i] <= mid) {
                    count++;
                } else {
                    bouke += (count / k);
                    count = 0;
                }
            }
            bouke += (count / k);
            if (bouke >= m) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};