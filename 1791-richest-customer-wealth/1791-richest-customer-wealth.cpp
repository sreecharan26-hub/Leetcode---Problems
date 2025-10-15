class Solution {
public:
    int maximumWealth(vector<vector<int>>& a) {
        vector<int> v;
        int n = a.size();
        for(int i=0;i<n;i++){
            int sum = 0;
            for (int j=0;j<a[i].size();j++){
                sum = sum+a[i][j];
            }
             v.push_back(sum);
        }
        return *max_element(v.begin(),v.end());        
    }
};