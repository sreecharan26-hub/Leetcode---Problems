class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        int n = arr.size();
        queue<int>q;
        q.push(start);
        while(!q.empty()){
            int i = q.front();
            q.pop();
            if(i<0 or i>=n or arr[i]<0){
                continue;
            }
            if(arr[i]==0){
                return true;
            }
            int jmp = arr[i];
            arr[i]*=-1;
            q.push(i-jmp);
            q.push(i+jmp);
        }
        return false;
    }
};