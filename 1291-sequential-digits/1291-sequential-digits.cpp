class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>a;
        string s = "123456789";
        for(int i=2;i<=9;i++){
            for(int j=0;j+i<=9;j++){
                string b= s.substr(j,i);
                int num = stoi(b);

                if(num>=low and num<=high){
                    a.push_back(num);
                }
            }
        }
        return a;
    }
};