class Solution {
public:
    string sortSentence(string s) {
        vector<string>v;
        string a;
        for(auto i : s){
            if(i==' '){
                v.push_back(a);
                a.clear();
            }
            else{
                a+=i;
            }
        }
        v.push_back(a);
        vector<string >ans(v.size());
        for(auto i : v){
            int pos = i.back()-'0';
            i.pop_back();
            ans[pos-1]=i;
        }
        string f;
        for(int i =0;i<ans.size();i++){
            f+=ans[i];
            if(i!=ans.size()-1){
                f+=" ";
            }
        }
        return f;
        
    }
};