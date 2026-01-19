class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> st;
        for(auto i : jewels){
            st.insert(i);
        }
        int count =0;
        for(auto i : stones){
            if(st.count(i)){
                count++;
            }
        }
        return count;
    }
};