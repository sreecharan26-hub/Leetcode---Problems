class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int counter = 0;
        for(auto i:s){
            if(i == '('){
                if(counter>0){
                    ans+=i;
                }
                counter++;
            }
            else{
                counter--;
                if(counter>0){
                    ans+=i;
                }
            }
        }
        return ans;
    }
};