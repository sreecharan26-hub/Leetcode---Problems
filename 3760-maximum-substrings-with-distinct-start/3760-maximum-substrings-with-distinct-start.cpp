class Solution {
public:
    int maxDistinct(string s) {
        
        vector<char>v(s.begin(),s.end());
        map<int,int>mp;
        vector<int>a;
        for(auto i : v){
            mp[i]++;
        }
        for(auto i: mp){
            a.push_back(i.first);
        }
        return a.size();
    }
};