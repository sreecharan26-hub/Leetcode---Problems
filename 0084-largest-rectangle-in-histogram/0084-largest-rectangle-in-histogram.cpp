class Solution {
public:
    int largestRectangleArea(vector<int>& nums) {
        int n = nums.size();
         stack<int>st;
         int maxarea = 0;
         for(int i=0;i<n;i++){
            while(!st.empty() and nums[st.top()]>nums[i]){
                int element = nums[st.top()];
                st.pop();
                int nse = i;
                int pse; 
                if(st.empty()){
                    pse = -1;
                }
                else{
                    pse=st.top();
                }
                maxarea = max(maxarea,(nse-pse-1)*element);
            }
            st.push(i);
         }
         while(!st.empty()){
            int nse = n;
            int element =nums[st.top()];
            st.pop();
            int pse;
            if(st.empty()){
                pse = -1;
            }
            else{
                pse=st.top();
            }
            maxarea=max(maxarea,(nse-pse-1)*element);
         }
         return maxarea;
    }
};