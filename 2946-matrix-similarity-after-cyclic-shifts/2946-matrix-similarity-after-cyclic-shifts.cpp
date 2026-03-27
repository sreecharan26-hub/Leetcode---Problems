class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int n = mat.size();
        int m = mat[0].size();

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {

                int newCol;

                if(i % 2 == 0) {
                 
                    newCol = (j + k) % m;
                } else {
                   
                    newCol = (j - k % m + m) % m;
                }

                if(mat[i][j] != mat[i][newCol]) {
                    return false;
                }
            }
        }

        return true;
    }
};