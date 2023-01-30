class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
            int n=nums.size();
      vector<int>dp(n,1),cnt(n,1);int maxx=1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[i]>nums[j]&&(1+dp[j])>dp[i])
                { 
                    dp[i]=dp[j]+1;
                 cnt[i]=cnt[j];
            }
                else if(nums[i]>nums[j]&&(1+dp[j])==dp[i])
                {
                    cnt[i]+=cnt[j];
                }
            }
                maxx=max(maxx,dp[i]);
                
        }
        
            int res=0;
            for(int i=0;i<n;i++)
            {
                if(dp[i]==maxx) res+=cnt[i];
            }
            return res;
    }
};