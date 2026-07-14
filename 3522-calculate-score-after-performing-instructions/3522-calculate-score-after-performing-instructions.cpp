class Solution {
public:
    long long calculateScore(vector<string>& instructions, vector<int>& values) {
        set<int>st;
        long long sum =0;
        int i=0;
        while(i>=0 and i<values.size() and st.find(i)==st.end()){
            st.insert(i);
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