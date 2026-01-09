class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int n = pref.size();
        vector<int> v;
        v.push_back(pref[0]);
        int a;

        for(int i=1;i<n;i++){
            a=pref[i]^pref[i-1];
            v.push_back(a);
        }
        return v;
    }
};