class Solution {
public:
    int minimumPushes(string word) {
        int sum = 0;
        unordered_map<char, int> mp;
        for (auto i : word) {
            mp[i]++;
        }
        vector<int>v;
        for(auto i: mp){
            v.push_back(i.second);
        }
        sort(v.rbegin(),v.rend());
        
        for (int i=0;i<v.size();i++) {
            if(i < 8) {
                sum += v[i];
            }
            else if(i<16){
                sum+=2*v[i];
            }
            else if(i<24){
                sum+=3*v[i];
            }
            else{
                sum+=4*v[i];
            }
            
        }
        return sum;
    }
};