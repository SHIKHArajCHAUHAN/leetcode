class Solution {
public:
    int countTime(string time) {
      vector<int>v;
        if (time[0] == '?') {
            if (time[1] != '?' && time[1]-48<=3) v.push_back(3);
            else if (time[1] != '?' && time[1]-48>=4) v.push_back(2);
            else if (time[1] == '?') v.push_back(24);
        }
        if (time[1] == '?') {
            if (time[0] != '?' && time[0]-48<=1)v.push_back(10);
            else if (time[0] != '?' && time[0]-48==2) v.push_back(4);
        }
        if (time[3] == '?') v.push_back(6);
        if (time[4] == '?') v.push_back(10);
        
        int ans = 1;
        for (auto x:v) ans*=x;

        return ans;   
    }
};