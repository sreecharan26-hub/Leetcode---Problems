class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        vector<int>v(26,0);
        for(auto i : word){
            v[i-'a']++;
        }
        sort(v.rbegin(),v.rend());
        int sum = 0;
        for(int i=0;i<26;i++){
            sum+=v[i]*(i/8+1);
        }
        return sum;
    }
};