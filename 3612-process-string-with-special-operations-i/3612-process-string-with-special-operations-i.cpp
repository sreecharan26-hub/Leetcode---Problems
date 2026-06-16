class Solution {
public:
    string processStr(string s) {
        string a = "";
        for(int i=0;i<s.size();i++){
            if(s[i]=='#'){
                if(!a.empty()){
                    a+=a;
                }
            }
            else if(s[i]=='%'){
                reverse(a.begin(),a.end());
            }
            else if(s[i]=='*'){
                if(!a.empty()){
                    a.pop_back();
                }
            }
            else{
                a+=s[i];
            }
        }
        return a;

    }
};