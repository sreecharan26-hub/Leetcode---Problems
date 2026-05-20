class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int>count(n+1,0);
        vector<int>v;
        int cnt = 0;
        for(int i=0;i<n;i++){
            count[A[i]]++;
            if(count[A[i]]==2){
                cnt++;
            }
            count[B[i]]++;
            if(count[B[i]]==2){
                cnt++;
            }
            v.push_back(cnt);
        }
        return v;
    }
};