class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int target) {
        for(int i = 0;i<m.size();i++){
            for(int j = 0;j<m[0].size();j++){
                if(m[i][j] == target){
                    return true;
                }
            }
        }
        return false;
    }
};