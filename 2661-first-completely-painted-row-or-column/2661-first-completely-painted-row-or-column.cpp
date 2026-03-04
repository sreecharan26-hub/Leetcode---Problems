class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int n = arr.size();
        int a = mat.size();
        int b = mat[0].size();
        unordered_map<int,pair<int,int>>mp;
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                mp[mat[i][j]]={i,j};
            }
        }
        vector<int>row(a,0),col(b,0);
        for(int i=0;i<n;i++){
            int r = mp[arr[i]].first;
            int c = mp[arr[i]].second;
            row[r]++;
            col[c]++;
            if(row[r]==b or col[c]==a){
                return i;
            }
        }
        return -1;

    }
};