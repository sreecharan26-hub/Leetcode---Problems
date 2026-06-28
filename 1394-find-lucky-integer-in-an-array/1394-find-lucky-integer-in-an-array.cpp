class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n = arr.size();
        map<int,int>mp;
        for(auto i : arr){
            mp[i]++;
        }
        int maxi = -1;
        for(auto i : mp){
            if(i.second==i.first){
                maxi=max(maxi,i.first);
            }
        }
        return maxi;
    }
};