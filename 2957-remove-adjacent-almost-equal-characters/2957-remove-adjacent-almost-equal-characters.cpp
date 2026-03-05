class Solution {
public:
    int removeAlmostEqualCharacters(string word) {
        int n = word.size();
        int cnt = 0;
        string s = "";
        for(int i=0;i<n-1;i++){
            if(abs(word[i]-word[i+1])<=1){
               cnt++;
               i++;
            }
        }
        return cnt;
    }
};