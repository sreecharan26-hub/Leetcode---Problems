class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int m = bank.size();
        int n = bank[0].size();
        int prev = 0;
        int ans = 0;
        for(int i=0;i<m;i++){
            int curr = 0;
            for(int j=0;j<n;j++){
                if(bank[i][j]=='1') curr++;
            }
            if(curr>0){
                ans+=prev*curr;
                prev = curr;
            }
        }
        return ans;
    }
};