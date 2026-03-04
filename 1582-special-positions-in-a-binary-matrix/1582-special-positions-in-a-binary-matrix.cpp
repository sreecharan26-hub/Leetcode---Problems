class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int a = mat.size();
        int b = mat[0].size();
        vector<int>row(a,0);
        vector<int>col(b,0);

        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                if(mat[i][j]==1){
                    row[i]++;
                    col[j]++;
                }
            }
        }
        int cnt =0;
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                if(mat[i][j]==1 and row[i]==1 and col[j]==1){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};