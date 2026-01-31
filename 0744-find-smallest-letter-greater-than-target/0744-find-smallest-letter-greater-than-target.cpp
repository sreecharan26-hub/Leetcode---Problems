class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        int l = 0;
        int h = n-1;
        int ans = letters[0];
        while(l<=h){
            int mid = (l+h)/2;
            if(letters[mid]>target){
                ans = letters[mid];
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};