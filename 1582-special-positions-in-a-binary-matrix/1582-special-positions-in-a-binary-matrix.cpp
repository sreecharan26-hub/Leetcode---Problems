class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int a = mat.size();
        int b = mat[0].size();
        int cnt = 0;
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                if(mat[i][j]==1 ){
                    int row = 0,col =0;
                    for(int k=0;k<b;k++){
                        row+=mat[i][k];
                    }
                    for(int k=0;k<a;k++){
                        col+=mat[k][j];
                    }
                    if(row == 1 and col == 1){
                        cnt++;
                    }
                }
            }
        }
        return cnt;
    }
};