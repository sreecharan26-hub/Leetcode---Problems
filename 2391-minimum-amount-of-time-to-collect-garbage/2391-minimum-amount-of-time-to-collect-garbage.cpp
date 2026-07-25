class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int n  = garbage.size();
        int m  = travel.size();
        for(int i=1;i<m;i++){
            travel[i]+=travel[i-1];
        }
        int lm = -1,lg=-1,lp=-1;
        int ans = 0;
        for(int i=0;i<n;i++){
            ans+=garbage[i].size();
            for(auto x:garbage[i]){
                if(x=='M'){
                    lm = i;
                }
                else if(x=='P'){
                    lp = i;
                }
                else{
                    lg = i;
                }
            }
        }
        if(lm>0){
            ans+=travel[lm-1];
        }
        if(lp>0){
            ans+=travel[lp-1];
        }
        if(lg>0){
            ans+=travel[lg-1];
        }
        return ans;

    }
};