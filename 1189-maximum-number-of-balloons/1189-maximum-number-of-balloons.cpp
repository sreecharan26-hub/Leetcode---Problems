    class Solution {
    public:
        int maxNumberOfBalloons(string t) {
            vector<int>v(26,0);
            for(auto i : t){
                v[i-'a']++;
            }
            return min({
                v['b'-'a'],
                v['a'-'a'],
                v['l'-'a']/2,
                v['o'-'a']/2,
                v['n'-'a']
            });
        }
    };