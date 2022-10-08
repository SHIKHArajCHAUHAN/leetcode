class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
      
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int res = nums[0] + nums[1] + nums[2];
    for (int i = 0; i < nums.size(); i++)
    {
        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            int curr = nums[i] + nums[j] + nums[k];
            if (abs(curr - target) < abs(res - target))
                res = curr;
            if (curr < target)
                j++;
            else
                k--;
        }
    }
    return res;  
    }
};