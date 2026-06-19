class Solution {
public:
    bool validPalindrome(string s) {
        int n = s.size();
        int i=0;
        int j =n-1;
        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                int l1=i+1;
                int r1=j;
                while(l1<r1 and s[l1]==s[r1]){
                    l1++;
                    r1--;
                }
                int l2=i;
                int r2=j-1;
                while(l2<r2 and s[l2]==s[r2]){
                    l2++;
                    r2--;
                }
                return l1>=r1 || l2>=r2;
            }
        } 
        return true;
    }
};