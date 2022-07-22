class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
     int minn=INT_MAX;
        sort(nums.begin(),nums.end());
        vector<int>ans(k,0);
        int n=nums.size();
        if(n==1) return 0;
        for(int i=0;i<n-k+1;i++)
        {
            minn=min(minn,(nums[i+k-1]-nums[i]));
        }
      /*  for(int i=0;i<k;i++)
        {ans.push_back(nums[i]);
            
        }sort(ans.begin(),ans.end());
        if(k>1)
        {
           minn= min(minn,(ans[k-1]-ans[0]));
        }
        minn=min(minn,ans[0]);
        for(int i=k;i<nums.size();i++)
        {
            ans.push_back(nums[i]);
            ans.erase(nums[i-k]);
            sort(ans.begin(),ans.end());
            if(k>1)
            {
             minn= min(minn,(ans[k-1]-ans[0]));
 
            }else         minn=min(minn,ans[0]);

        }*/
        return minn;
    }
};