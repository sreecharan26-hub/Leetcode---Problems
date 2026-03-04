class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int a = grid.size();
        int b = grid[0].size();
        vector<int>row(a,0),col(b,0);
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                if(grid[i][j]==1){
                    row[i]++;
                    col[j]++;
                }
            }
        }
        vector<vector<int>>v(a,vector<int>(b));
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                v[i][j]=row[i]+col[j]-(b-row[i])-(a-col[j]);
            }
        }
        return v;
    }
};