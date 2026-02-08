class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>v;
        for(int i=0;i<=n;i++){
            int num = i;
            int cnt =0;
            while(num>0){
                num=num&(num-1);
                cnt++;
            }
             v.push_back(cnt);
        }
        return v;
    }
};