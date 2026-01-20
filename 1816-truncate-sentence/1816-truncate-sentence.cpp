class Solution {
public:
    string truncateSentence(string s, int k) {
        int n = s.length();
        int count = 0;
        string a ="";
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                count++;
            }
            if(count==(k)){
                break;
            }
            a.push_back(s[i]);
        }
        return a;
    }
};