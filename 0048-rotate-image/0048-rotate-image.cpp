class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<vector<int>> a(col, vector<int>(row));
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                a[j][row-1-i]=matrix[i][j];
            }
        }
        matrix = a;

    }
};