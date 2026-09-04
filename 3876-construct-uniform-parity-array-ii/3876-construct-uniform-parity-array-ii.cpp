class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        // int n = nums1.size();
        // int ocnt = 0;
        // int ecnt = 0;
        // for(auto i : nums1){
        //     if(i%2==0){
        //         ecnt++;
        //     }
        //     else{
        //         ocnt++;
        //     }
        // }
        // if(ocnt==0 or ecnt==0){
        //     return true;
        // }
        int a  = *min_element(nums1.begin(),nums1.end());
        if(a%2!=0){
            return true;
        }
        else{
            for(auto i : nums1){
                if(i%2!=0){
                    return false;
                }
            }
        }
        return true;
    }
};