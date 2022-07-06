class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
       int n=nums.size();
        int suf[n];
        int sum=0;
        suf[n-1]=nums[n-1];
        
        for(int i=n-2;i>=0;i--)
        {
            suf[i]=suf[i+1]+ nums[i];
        }
        int ans=-1;
        
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            if(sum==suf[i])
            {
                ans=i;
            break;
            }
        }
        return ans;
    }
};