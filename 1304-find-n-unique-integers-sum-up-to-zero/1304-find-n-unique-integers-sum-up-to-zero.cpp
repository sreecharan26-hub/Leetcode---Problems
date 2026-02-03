class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> v;
        int x =1;
        while(v.size()+1<n){
            v.push_back(x);
            v.push_back(-x);
            x++;
        }
        if(n%2!=0){
            v.push_back(0);
        }
        return v;
    }
};