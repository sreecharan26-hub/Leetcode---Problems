class Solution {
public:
    bool completePrime(int num) {
        string s = to_string(num);
        int n = s.size();
        vector<string>v;
        string a = "";
        for(int i=0;i<n;i++){
            a+=s[i];
            v.push_back(a);
        }
        for(int i=0;i<n;i++){
            v.push_back(s.substr(i));
        }
        for(int i=0;i<v.size();i++){
            int b =stoi(v[i]);

            if(b<2){
                return false;
            }
            for(int j=2;j*j<=b;j++){
                if(b%j==0){
                    return false;
                }
            }
        }
        return true;
    }
};