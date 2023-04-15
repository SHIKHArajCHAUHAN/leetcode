class Solution {
public:
    int numWays(string s) {
       //taken help
           int n = s.size();
        vector<int> ones;
        for (int i = 0; i < n; ++i) {
            if (s[i] == '1') ones.push_back(i);
        }
        int m = ones.size();
        if (m == 0) {
            return (long long)(n - 1) * (n - 2) / 2 % 1000000007;
        }
        if (m % 3 != 0) return 0;
        return (long long)(ones[m / 3] - ones[m / 3 - 1]) * (ones[2 * m / 3] - ones[2 * m / 3 - 1]) % 1000000007;
    }
};