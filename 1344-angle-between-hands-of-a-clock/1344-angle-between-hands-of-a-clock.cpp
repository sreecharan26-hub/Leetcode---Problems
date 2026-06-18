class Solution {
public:
    double angleClock(int hour, int minutes) {
        double a = (hour % 12) * 30 + minutes * 0.5;
        double b = minutes * 6;

        double diff = abs(a - b);

        return min(diff, 360.0 - diff);
    }
};