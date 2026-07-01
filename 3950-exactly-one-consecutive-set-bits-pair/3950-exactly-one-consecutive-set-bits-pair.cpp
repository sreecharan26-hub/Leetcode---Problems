class Solution {
public:
    bool consecutiveSetBits(int n) {
        if(n==0){
            return false;
        }
        vector<int>v;
        while(n>0){
            v.push_back(n%2);
            n/=2;
        }
        int cnt =0;
        for(int i=0;i<v.size()-1;i++){
            if(v[i]==1 and v[i+1]==1){
                cnt++;
            }
        }
        return cnt==1;
    }
};