class Solution {
public:
    int reverse(int i){
        int rev = 0;
        while(i>0){
            rev = rev*10+(i%10);
            i=i/10;    
        }
        return rev;
    }
    int countDistinctIntegers(vector<int>& nums) {
        set<int>st;
        for(auto i: nums){
            st.insert(i);
            st.insert(reverse(i));
        }
        return st.size();
    }
};