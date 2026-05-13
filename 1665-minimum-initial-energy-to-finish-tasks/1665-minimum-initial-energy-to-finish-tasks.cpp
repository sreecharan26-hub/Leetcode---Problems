class Solution {
public:
    bool isPossible(vector<vector<int>>& tasks,int mid){
        for(auto & i : tasks){
            int actual = i[0];
            int mini = i[1];
            if(mini>mid){
                return false;
            }
            mid-=actual;
        }
        return true;
    }
    int minimumEffort(vector<vector<int>>& tasks) {
        int n = tasks.size();
        sort(tasks.begin(),tasks.end(),[](vector<int>&a,vector<int>&b){
            return (a[1]-a[0])>(b[1]-b[0]);
        });
        int l =0;
        int h= 1e9;
        int ans = h;
        while(l<=h){
            int mid = l+(h-l)/2;
            if(isPossible(tasks,mid)){
                ans = mid;
                h = mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};