class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        vector<int>v=arr;
        sort(v.begin(),v.end());

        unordered_map<int,int>mp;
        int r = 1;
        for(auto i : v){
            if(mp.find(i)==mp.end()){
                mp[i]=r;
                r++;
            }
        }
        for(int i=0;i<n;i++){
            arr[i]=mp[arr[i]];
        }
        return arr;
    }
};