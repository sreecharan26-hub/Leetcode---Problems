class Solution {
public:
    int numberOfSpecialChars(string word) {
        set<int>st(word.begin(),word.end());
        int cnt = 0;
        for(auto i : st){
            if(st.count(i) and st.count(i-32)){
                cnt++;
            }
        }
        return cnt;
    }
};