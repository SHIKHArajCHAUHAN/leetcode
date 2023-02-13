class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
       int suf[n];
        int sum=0;
        suf[n-1]=nums[n-1];
        int pre[n];
        pre[0]=nums[0];
        int ans=-1;
        if(n==1) return 0;
        
       for(int i=1;i<n;i++)
        {
            pre[i]=pre[i-1]+nums[i];
        }
        for(int i=n-2;i>=0;i--)
        {
            suf[i]=suf[i+1]+nums[i];
        }
        
        for(int i=0;i<n;i++)
        {
        
            if(suf[i]==pre[i])
            {    ans=i;
            break;}
        }
        
        return ans;
    }
};