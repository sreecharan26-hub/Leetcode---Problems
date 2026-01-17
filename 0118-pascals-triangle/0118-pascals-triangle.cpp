class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n = numRows;
        vector<vector<int>>a;
        vector<int>v;
        v.push_back(1);
        a.push_back(v);
        for(int i=1;i<n;i++){
            vector<int>nv;
            nv.push_back(1);
            for(int j=1;j<i;j++){
                nv.push_back(v[j-1]+v[j]);
            }
            nv.push_back(1);
            v= nv;
            a.push_back(v);
        }
        return a;
    }
};