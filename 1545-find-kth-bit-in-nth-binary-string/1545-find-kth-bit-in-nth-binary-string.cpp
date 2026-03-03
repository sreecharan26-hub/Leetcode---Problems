class Solution {
public:
    char findKthBit(int n, int k) {
        string s = "0";
        for(int i=2;i<=n;i++){
            string a = s;
            for(auto &i : a){
               i^=1;
            }
            reverse(a.begin(),a.end());
            s=s+"1"+a;
        }
        return s[k-1];
    }
};