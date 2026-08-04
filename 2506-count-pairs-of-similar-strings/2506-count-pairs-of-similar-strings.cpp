class Solution {
public:
    int similarPairs(vector<string>& words) {
        map<string,int>mp;
        int cnt = 0;
        for(auto i : words){
            set<char>st(i.begin(),i.end());

            string s ="";
            for(char c : st){
                s+=c;
            }
            cnt=cnt+mp[s];
            mp[s]++;
        }
        return cnt;
    }
};