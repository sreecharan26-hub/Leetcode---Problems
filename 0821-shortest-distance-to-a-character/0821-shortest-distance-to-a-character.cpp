class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s. size();
        vector<int>v;
        for(int i=0;i<n;i++){
            int mini = n;
            for(int j=0;j<n;j++){
                if(s[j]==c){
                   mini = min(mini,abs(j-i));
                }
            }
            v.push_back(mini);
        }
        return v;
    }
};