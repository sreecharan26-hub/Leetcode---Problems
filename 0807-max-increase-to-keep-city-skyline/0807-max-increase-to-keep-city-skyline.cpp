class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<int>r(n,0);
        vector<int>c(n,0);
        for (int i=0;i<n;i++) {
            for(int j=0;j<m;j++){
                r[i]=max(r[i],grid[i][j]);
                c[j]=max(c[j],grid[i][j]);
            }
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans+=min(r[i],c[j])-grid[i][j];
            }
        }
        return ans;
    }
};