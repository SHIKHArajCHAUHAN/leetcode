class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n = nums.size();
        if(n < 5)
            return 0;
        sort(nums.begin(), nums.end());
        int min1 = nums[n - 4] - nums[0];
        int min2 = nums[n- 3] - nums[1];
        int min3 = nums[n - 2] - nums[2];
        int min4 = nums[n - 1] - nums[3];
        return min({min1, min2, min3, min4});
    }
};