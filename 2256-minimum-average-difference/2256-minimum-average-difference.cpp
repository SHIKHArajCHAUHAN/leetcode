class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        vector<int>pre,suf;
        long long sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
        }
       long currSum = 0, avgAbsDiff = 0, currMinDiff = LONG_MAX;
		int ans = 0;
		for (int i = 0; i <nums.size(); i++) {
			currSum += nums[i];
			int remains = nums.size() - (i + 1);

			avgAbsDiff = abs(currSum / (i + 1) - (sum - currSum) / (remains ? remains : 1));

			if (avgAbsDiff < currMinDiff) {
				ans = i;
				currMinDiff = avgAbsDiff;
			}
		}
		return ans;
    }
};