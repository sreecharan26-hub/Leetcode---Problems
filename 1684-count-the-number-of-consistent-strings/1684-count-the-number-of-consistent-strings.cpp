class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<char>v(26,0);
        for(auto i : allowed){
            v[i-'a']++;
        }
        int cnt = 0;
        for(auto i : words){
            bool ok = true;
            for(auto j : i){
                if(!v[j-'a']){
                    ok = false;
                    break;
                }
            }
            if(ok == true){
                cnt++;
            }
        }
        return cnt;
    }
};