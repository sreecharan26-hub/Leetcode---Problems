class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int top = x;
        int bot = x+k-1;
        while(top<bot){
            for(int i=y;i<y+k;i++){
                swap(grid[top][i],grid[bot][i]);
            }
            top++;
            bot--;
        }
        return grid;
    }
};