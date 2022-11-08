class Solution {
public:
    string maximumTime(string time) {
         for(int i = 0; i < time.length(); i++) {
            if(i == 0 and time[i] == '?') {
                if(time[i+1] == '?') {
                    time[i] = '2';
                }
                else if(time[i+1] > '3') {
                    time[i] = '1';
                }
                else time[i] = '2';
            }
            if(i == 1 and time[i] == '?') {
                if(time[i-1] == '2') time[i] = '3';
                else time[i] = '9';
            }
            if(i == 3 and time[i] == '?') time[i] = '5';
            if(i == 4 and time[i] == '?') time[i] = '9';
        }
        return time;
    }
};