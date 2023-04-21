class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        map<int,pair<int,int>> mp;////done with hits and help
        for (int i = 0; i < times.size(); ++i) {
            mp[times[i][0]] = {times[i][1], i};
        }
        int seat = 0;
        while (mp.size()) {
            auto it = mp.begin();
            while (it != mp.end()) {
                auto [end, i] = it->second;
                if (i == targetFriend) return seat;
                mp.erase(it);
                it = mp.lower_bound(end);
            }
            seat++;
        }
        return -1; 
    }
};