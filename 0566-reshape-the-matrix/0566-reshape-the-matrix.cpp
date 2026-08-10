class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n = mat.size();
        int m = mat[0].size();
        if(r*c!=m*n){
            return mat;
        }
        
        vector<vector<int>>v(r,vector<int>(c));
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                int idx = i*c+j;
                v[i][j]=mat[idx/m][idx%m];
            }
        }
        return v;

    }
};