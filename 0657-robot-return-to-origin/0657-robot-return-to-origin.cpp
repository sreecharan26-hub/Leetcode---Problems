class Solution {
public:
    bool judgeCircle(string moves) {
        int x= 0;
        int y = 0;
        for(auto i : moves){
            if(i=='U') x++;
            else if(i=='D') x--;
            else if(i=='L') y++;
            else if(i=='R') y--;
        }
        if(x==0 and y==0){
            return true;
        }
        return false;
    }
};