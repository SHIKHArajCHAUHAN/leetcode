class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int S = 0;
        for (int x: nums)
            if (x % 2 == 0)
                S += x;

        vector<int> ans(queries.size());

        for (int i = 0; i < queries.size(); ++i) {
            int val = queries[i][0], index = queries[i][1];
            if (nums[index] % 2 == 0) S -= nums[index];
            nums[index] += val;
            if (nums[index] % 2 == 0) S += nums[index];
            ans[i] = S;
        }
        return ans;
    }
};