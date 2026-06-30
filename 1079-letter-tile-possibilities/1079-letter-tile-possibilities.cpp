class Solution {
public:
    int solve(vector<int>&v){
        int cnt =0;
        for(int i=0;i<26;i++){
            if(v[i]==0){
                continue;
            }
            cnt++;
            v[i]--;
            cnt+=solve(v);
            v[i]++;
        }
        return cnt;
    }
    int numTilePossibilities(string tiles) {
        vector<int>v(26,0);
        for(auto i : tiles){
            v[i-'A']++;
        }
        return solve(v);
    }
};