class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.length();
        if(n==k){
            return "0";
        }
        stack<char>st;
        for(int i=0;i<n;i++){
            while(!st.empty() and k>0 and st.top()-'0'>num[i]-'0'){
                st.pop();
                k=k-1;
            }
            st.push(num[i]);
        }
        while(k>0){
        st.pop();
        k--;
        }
        string res = "";
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        while(res.size()!=0 and res.back()=='0'){
            res.pop_back();
        }
        reverse(res.begin(),res.end());
        if(res.empty()){
            return "0";
        }
        return res;
    }
};