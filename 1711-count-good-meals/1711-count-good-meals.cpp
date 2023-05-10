class Solution {
public:
    int countPairs(vector<int>& deliciousness) {
        int cnt = 0;///excellent
        int mod=1e9+7;
        unordered_map<int, int> mp;
        for (int i = 0; i < deliciousness.size(); i++) {
            int p = 1;
            for (int j = 0; j < 22; j++) {
                cnt = (cnt + mp[p - deliciousness[i]]) % mod;
                p *= 2;
            }
            mp[deliciousness[i]]++;
        }
        return cnt;
    }
};