class Solution {
public:
    int digitFrequencyScore(int n) {
        string s = to_string(n);
        int sum = 0;
        map<char,int>mp;
        for(auto i : s){
            mp[i]++;
        }
        for(auto i : mp){
            sum+=(i.first-'0')*i.second;
        }
        return sum;
    }
};