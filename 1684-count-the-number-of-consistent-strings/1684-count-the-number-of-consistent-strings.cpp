class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        set<char>st;
        for(auto i : allowed){
            st.insert(i);
        }
        int cnt = 0;
        for(auto i : words){
            int a = 0;
            for(auto j : i){
                if(st.find(j)==st.end()){
                    a++;
                }
            }
            if(a==0){
                cnt++;
            }
        }
        return cnt;
    }
};