class Solution {
public:
    int maxProduct(int n) {
        vector<int>v;
        while(n>0){
            int a =n%10;
            v.push_back(a);
            n=n/10;
        }
        int ans = 1;
        sort(v.rbegin(),v.rend());
        
        return (v[0]*v[1]);
    }
};