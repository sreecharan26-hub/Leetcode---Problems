class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> v;
        int n = words.size();
        for(int i=0;i<n;i++){
            if(words[i].find(x) != -1){
                v.push_back(i);
                cout << i << " ";
            }
        }
        for(auto i: v){
            cout << i << " ";
        }
        return v;
    }
};