class Solution {
public:
    vector<int> smallestSubarrays(vector<int>& nums) {
        int last[30]={};
        vector<int>ans(nums.size(),1);
        int n=nums.size();
        for(int i=n-1;i>=0;i--)
        {
            for(int j=0;j<30;j++)
            {
                if(nums[i]&(1<<j))last[j]=i;
                ans[i]=max(ans[i],last[j]-i+1);
            }
        }
        return ans;
    }
};