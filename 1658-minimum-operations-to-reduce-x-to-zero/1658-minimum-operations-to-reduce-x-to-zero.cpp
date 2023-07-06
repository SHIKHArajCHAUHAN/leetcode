class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
            int n = nums.size();
        int i = 0, j = 0, sum = accumulate(nums.begin(), nums.end(), 0), maxx = 0, target = sum - x;

        if(sum < x)
            return -1;
        if(target == 0)
            return n;
        
        sum = 0;
        while(j < n) {
            sum += nums[j];

            while(sum > target)
                sum -= nums[i++];
            
            if(sum == target)
                maxx = max(maxx, j - i + 1);

            j++;
        }

        return maxx == 0 ? -1 : n - maxx;  
    }
};