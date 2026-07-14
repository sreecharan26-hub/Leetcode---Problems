class Solution {
public:
    long long calculateScore(vector<string>& instructions, vector<int>& values) {
        map<int,int>mp;
        long long sum =0;
        int i=0;
        while(i>=0 and i<values.size() and mp.find(i)==mp.end()){
            mp[i]=1;
            if(instructions[i]=="jump"){
                i+=values[i];
            }
            else{
                sum+=values[i];
                i++;
            }
        }
        return sum;
    }
};