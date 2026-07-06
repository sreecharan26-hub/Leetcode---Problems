class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(),intervals.end(),[](vector<int>&a,vector<int>&b){
            if(a[0]==b[0]){
                return a[1]>b[1];
            }
            else{
                return a[0]<b[0];
            }
        });
            int cnt =0;
            int  end = 0;
            for(int i=0;i<n;i++){
                if(intervals[i][1]>end){
                    cnt++;
                    end=intervals[i][1];
                }
            }
        return cnt;   

    }
};