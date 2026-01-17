class Solution {
public:
    vector<int> getRow(int nums) {
        int n = nums;
        vector<int> v;
        v.push_back(1);
        for(int i=1;i<=n;i++){
            vector<int>nv;
            nv.push_back(1);
            for(int j=1;j<i;j++){
                nv.push_back(v[j-1]+v[j]);
            }
            nv.push_back(1);
            v=nv;
        }
        return v;
    }
};