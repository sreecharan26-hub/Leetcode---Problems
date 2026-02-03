class Solution {
public:
    string sortVowels(string s) {
        int n =s.size();
        vector<char> v;
        for(auto i : s){
            if(i=='a' or i=='e' or i=='i' or i=='o' or i=='u' or
            i=='A' or i=='E' or i=='I' or i=='O' or i=='U'){
                v.push_back(i);
            }
        }
        sort(v.begin(),v.end());
        int a =0;
        for(int i=0;i<n;i++){
             if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or 
             s[i]=='u' or s[i]=='A' or s[i]=='E' or s[i]=='I' 
             or s[i]=='O' or s[i]=='U'){
                s[i]=v[a++];
            }
        }
        return s;
    }
};