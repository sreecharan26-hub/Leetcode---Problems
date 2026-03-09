class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int a = seats.size();
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int sum = 0;
        for(int i=0;i<a;i++){
            sum+= abs(seats[i]-students[i]);
        }
        return sum;
    }
};