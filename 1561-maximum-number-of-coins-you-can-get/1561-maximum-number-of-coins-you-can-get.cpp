class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n  = piles.size();
        sort(piles.begin(),piles.end());
        int l = 0;
        int r = n-1;
        int ans = 0;
        while(l<r){
            ans+=piles[r-1];
            l++;
            r-=2;
        }
        return ans;

    }
};