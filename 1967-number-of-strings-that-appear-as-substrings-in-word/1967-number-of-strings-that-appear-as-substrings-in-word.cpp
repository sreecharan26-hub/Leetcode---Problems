class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int cnt =0;
        for(auto i : patterns){
            int a = word.find(i);
            if(a>=0){
                cnt++;
            }
        }
        return cnt;
    }
};