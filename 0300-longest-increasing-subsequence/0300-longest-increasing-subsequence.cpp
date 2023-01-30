class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
      int dp[n];
        for(int i=0;i<n;i++)
        {
            dp[i]=1;
            for(int j=0;j<i;j++)
            {
                if(nums[i]>nums[j]&&1+dp[j]>dp[i])
                    dp[i]=dp[j]+1;
            }
        }
        sort(dp,dp+n);
        return dp[n-1];
    }
};