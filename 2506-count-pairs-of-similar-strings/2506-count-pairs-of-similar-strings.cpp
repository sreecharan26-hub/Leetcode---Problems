class Solution {
public:
    int similarPairs(vector<string>& words) {
        int cnt = 0;
        for(int i=0;i<words.size();i++){
            set<char>st1(words[i].begin(),words[i].end());
            for(int j=i+1;j<words.size();j++){
                set<char>st2(words[j].begin(),words[j].end());

                if(st1==st2){
                    cnt++;
                }
            }
        }
        return cnt;

    }
};