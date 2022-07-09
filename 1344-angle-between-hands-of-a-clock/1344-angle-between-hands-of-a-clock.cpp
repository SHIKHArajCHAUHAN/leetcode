class Solution {
public:
    double angleClock(int hour, int minutes) {
       double x=minutes*6;
        double y= hour+double(minutes)/60;
        double z=y*30;
        double ans=abs(x-z);
        return min(ans,360-ans);
    }
};