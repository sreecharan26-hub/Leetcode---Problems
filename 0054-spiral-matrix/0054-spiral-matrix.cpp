class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int top = 0, bot = n - 1;
        int left = 0, right = m - 1;
        vector<int> v;
        while (top <= bot && left <= right) {
            for (int i = left; i <= right; i++) {
                v.push_back(matrix[top][i]);
            }
            top++;
            for (int i = top; i <= bot; i++) {
                v.push_back(matrix[i][right]);
            }
            right--;
            if (top <= bot) {
                for (int i = right; i >= left; i--) {
                    v.push_back(matrix[bot][i]);
                }
            }
            bot--;
            if (left <= right) {
                for (int i = bot; i >= top; i--) {
                    v.push_back(matrix[i][left]);
                }
            }
            left++;
        }
        return v;
    }
};