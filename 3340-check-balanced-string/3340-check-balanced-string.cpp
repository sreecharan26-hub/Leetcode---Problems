class Solution {
public:
    bool isBalanced(string num) {
        int n = num.size();
        int sume=0;
        int sumo=0;
        for(int i=0;i<n;i+=2){
            sume+=num[i]-'0';
        }
        for(int i=1;i<n;i+=2){
            sumo+=num[i]-'0';
        }
        if(sume==sumo){
            return true;
        }
        else{
            return false;
        }
    }
};