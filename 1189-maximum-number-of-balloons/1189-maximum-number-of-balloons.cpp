    class Solution {
    public:
        int maxNumberOfBalloons(string t) {
            vector<int>v(26,0);
            for(auto i : t){
                v[i-'a']++;
            }
            int cnt=0;
            while(v['b'-'a']>=1 and
                v['a'-'a']>=1 and 
                v['l'-'a']>=2 and
                v['o'-'a']>=2 and
                v['n'-'a']>=1){
                
                v['b'-'a']--; 
                v['a'-'a']--;
                v['l'-'a']-=2;
                v['o'-'a']-=2;
                v['n'-'a']--;

                cnt++;
                }
                return cnt;
        }
    };