class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        int n = arr.size();
        stack<int>st;
        st.push(start);
        while(!st.empty()){
            int i = st.top();
            st.pop();
            if(i<0 or i>=n or arr[i]<0){
                continue;
            }
            if(arr[i]==0){
                return true;
            }
            int jmp = arr[i];
            arr[i]*=-1;
            st.push(i-jmp);
            st.push(i+jmp);
        }
        return false;
    }
};