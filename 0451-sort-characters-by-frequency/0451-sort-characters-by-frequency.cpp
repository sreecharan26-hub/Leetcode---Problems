class Solution {
public:
    string frequencySort(string s) {
        map<int,int>mp;
        for(auto i : s){
            mp[i]++;
        }
        vector<pair<int,char>>v;
        for(auto i : mp){
            v.push_back({-i.second,i.first});
        }
        sort(v.begin(),v.end());
        string ans ="";
        for(auto i : v){
            int freq = -i.first;
            char ch = i.second;
            for(int i=0;i<freq;i++){
                ans+=ch;
            }
        }
        return ans;
    }
};