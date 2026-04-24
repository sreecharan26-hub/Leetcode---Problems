class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int r =0;
        int l =0;
        int space = 0;
        for(auto i : moves){
            if(i=='L') l++;
            else if(i=='R') r++;
            else space++;
        }
        return abs(l-r)+space;
    }
};