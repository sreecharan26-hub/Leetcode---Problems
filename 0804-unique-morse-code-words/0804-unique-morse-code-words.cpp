class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string>s = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string>st;
        for(auto i : words){
            string ans = "";
            for(char c : i){
                ans+=s[c-'a'];
            }
            st.insert(ans);
        }
        return st.size();
    }
};