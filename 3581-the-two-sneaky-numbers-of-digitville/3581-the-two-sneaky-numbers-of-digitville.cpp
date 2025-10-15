class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> v(100,0);
        for(auto i : nums){
            v[i]++;
        }
        vector<int> a;
        for(int i=0;i<v.size();i++){
            if(v[i]==2){
                a.push_back(i);
            }

        }
        return a;
        
    }
};