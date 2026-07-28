class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();
        string a = "";
        for(int i=0;i<n/2;i++){
            a+=s[i];
        }
        sort(a.begin(),a.end());
        for(int i=0;i<n/2;i++){
            s[i]=a[i];
            s[n-i-1]=a[i];
        }
        return s;
    }
};