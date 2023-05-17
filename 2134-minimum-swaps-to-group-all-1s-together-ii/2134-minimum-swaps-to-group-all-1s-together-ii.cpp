class Solution {
public:
    int minSwaps(vector<int>& nums) {
      int k = accumulate(nums.begin(), nums.end(), 0);// total ones
        int sum = 0, n = nums.size(), ans = INT_MAX;
        for(int i = 0; i < n + k; i++) {
            sum += nums[i % n];
            if(i >= k)
                sum -= nums[i - k];
            if(i >= k - 1)
                ans = min(ans, k - sum);
        }
        return ans;   
    }
};