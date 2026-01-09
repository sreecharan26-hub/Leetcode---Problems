class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> v;
        int n = encoded.size();
        v.push_back(first);
        int a;
        for(int i=0;i<n;i++){
            a= encoded[i]^v[i];
            v.push_back(a);
        }
        return v;
    }
};