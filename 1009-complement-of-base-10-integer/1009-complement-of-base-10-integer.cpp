class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0){
            return 1;
        }
        vector<int>v;
        while(n>0){
            v.push_back(n%2);
            n/=2;
        }
        for(int i=0;i<v.size();i++){
            v[i]=1-v[i];
        }
        int ans = 0;
        for(int i=0;i<v.size();i++){
            ans+=v[i]*(1<<i);
        }
        return ans;
    }
};