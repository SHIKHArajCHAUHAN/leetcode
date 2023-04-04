class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
          map<int, int>mp;
        long long ans = 0;
        int start = 0;
        int end = 0;
        while(end < nums.size()) {
            k -= mp[nums[end]]++;
            while(k <= 0) {
                k += --mp[nums[start++]];
            }
            ans += start;
            end++;
        }
        return ans;
    }
};