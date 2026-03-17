class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int a = matrix.size();
        int b = matrix[0].size();
        vector<int>h(b,0);
        int ans =0;
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                if(matrix[i][j]==0){
                    h[j]=0;
                }
                else{
                    h[j]+=1;
                }
            }
            vector<int>temp = h;
            sort(temp.rbegin(),temp.rend());
            for(int j=0;j<b;j++){
                ans = max(ans,temp[j]*(j+1));
            }
        }
        return ans;
    }
};