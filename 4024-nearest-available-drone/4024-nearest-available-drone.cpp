class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {

        int n = drones.size();
        int m = drones[0].size();

        double mini = DBL_MAX;
        int ans = -1;

        for (int i = 0; i < n; i++) {
            long long a = abs(drones[i][0] - target[0]);
            long long b = abs(drones[i][1] - target[1]);
            double dist = a+b;

            if (dist <= drones[i][2] and dist < mini) {

                mini = dist;
                ans = i;
            }
        }

        return ans;
    }
};