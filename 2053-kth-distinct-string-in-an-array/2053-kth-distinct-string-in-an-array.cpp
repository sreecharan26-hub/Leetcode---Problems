class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        int n = arr.size();
        vector<string> v;
        for(int i=0;i<n;i++){
            int cnt =0;
            for(int j=0;j<n;j++){
                if(arr[i]==arr[j]){
                    cnt++;
                }
            }
            if(cnt==1){
                v.push_back(arr[i]);
            }
        }
        if(k>v.size()){
            return "";
        }
        return v[k-1];
    }
};