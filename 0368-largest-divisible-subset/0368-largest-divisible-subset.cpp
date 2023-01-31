class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
     int n=nums.size();
        vector<int>dp(n,1),hash(n,0);
        int maxx=1;
        int lastind=0;
      sort(nums.begin(),nums.end());
        vector<int>ans;
        for(int i=0;i<n;i++){
            hash[i]=i;
            for(int j=0;j<i;j++){
               if(nums[i]%nums[j]==0&&1+dp[j]>dp[i])
               {
                   dp[i]=1+dp[j];
                   hash[i]=j;
               }
            }
            if(dp[i]>maxx){
                maxx=dp[i];
                lastind=i;
            }
            
        }
        vector<int>temp;
        temp.push_back(nums[lastind]);
        while(hash[lastind]!=lastind)
        {
            lastind=hash[lastind];
            temp.push_back(nums[lastind]);
        }
        reverse(temp.begin(),temp.end());
        return temp;

    }
};