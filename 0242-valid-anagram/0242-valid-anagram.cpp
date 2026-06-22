class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        vector<int>v(26,0);
        for(auto i : s){
            v[i-'a']++;
        }
        for(auto i : t){
            v[i-'a']--;
        }
        for(auto i : v){
            if(i>=1){
                return false;
            }
        }
        return true;
    }
};