class Solution {
public:
    int maxDifference(string s) {
        int n = s.size();
        vector<int>v;
        map<char,int>mp;
        for(auto i : s){
            mp[i]++;
        }
        for(auto i: mp){
            v.push_back(i.second);
        }
        int a = v.size();
        vector<int>v1;
        vector<int>v2;
        for(auto i : v){
            if(i%2==0){
                v1.push_back(i);
            }
            else{
                v2.push_back(i);
            }
        }
        int x = *min_element(v1.begin(),v1.end());
        int y = *max_element(v2.begin(),v2.end());
        return y-x;
    }
};