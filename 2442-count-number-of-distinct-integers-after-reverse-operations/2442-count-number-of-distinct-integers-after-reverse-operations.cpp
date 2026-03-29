class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> st;
        for (auto i : nums) {
            st.insert(i);
            int x = i;
            int rev = 0;
            while (x>0) {
                rev = rev*10 + (x%10);
                x /= 10;
            }
            st.insert(rev);
        }
        return st.size();
    }
};