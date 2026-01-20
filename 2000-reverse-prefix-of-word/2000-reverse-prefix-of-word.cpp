    class Solution {
    public:
        string reversePrefix(string word, char ch) {
            int n = word.size();
            int l = 0;
            int r = -1;
            for(int i=0;i<n;i++){
                if(word[i]==ch){
                    r=i;
                    break;
                }
            }
            while(l<r){
                 swap(word[l],word[r]);
                l++;
                r--;
            }
            return word;
        }
    };