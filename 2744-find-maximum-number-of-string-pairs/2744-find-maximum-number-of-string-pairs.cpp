class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_set<string>s;
        int cnt =0;
        for(auto i : words){
            string rev = i;
            reverse(i.begin(),i.end());
            if(s.count(rev)){
                cnt++;
            }
            s.insert(i);
        }
        return cnt;
    }
};