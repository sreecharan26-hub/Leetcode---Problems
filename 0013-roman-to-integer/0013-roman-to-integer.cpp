class Solution {
public:
    int romanToInt(string s) {
        vector<int> v ={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        vector<string> a ={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        int ans = 0;
        for(int i=0;i<a.size();i++){
            while(s.find(a[i]) == 0){
                ans+=v[i];
                s = s.substr(a[i].length());
            }
        }
        return ans;
    }
};