class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int n = nums.size();
        vector<int>v;
        for(int i=0;i<n;i++){
            int n = nums[i];
            vector<int>a;
            while(n>0){
                int d = n%10;
                a.push_back(d);
                n=n/10;
            }
            reverse(a.begin(),a.end());
            for(int j=0;j<a.size();j++){
                v.push_back(a[j]);
            }
        }
        return v;
    }
};