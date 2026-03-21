class Solution {
public:
    int minSteps(string s, string t) {
        vector<int>v(26,0);
        for(auto i : s){
            v[i-'a']++;
        }
        for(auto i : t){
            v[i-'a']--;
        }
        int sum =0;
        for(int i=0;i<v.size();i++){
            if(v[i]>0){
                sum+=v[i];
            }
        }
        return sum;
    }
};