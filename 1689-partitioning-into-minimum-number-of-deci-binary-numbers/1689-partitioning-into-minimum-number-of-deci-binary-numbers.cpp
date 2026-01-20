class Solution {
public:
    int minPartitions(string n) {
        int a = n.size();
        vector<int>v;
        for(int i=0;i<a;i++){
            if(n[i]>='0' and n[i]<='9'){
                v.push_back(n[i]-'0');
            }
        }
        sort(v.rbegin(),v.rend());
        return v[0];
    }
};