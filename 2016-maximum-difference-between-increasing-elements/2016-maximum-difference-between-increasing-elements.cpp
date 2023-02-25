class Solution {
public:
    int maximumDifference(vector<int>& nums) {
      int n=nums.size();
        int arr[n];
        arr[0]=nums[0];
        int minn=nums[0];
        for(int i=1;i<n;i++)
        {
            minn=min(minn,nums[i]);
            arr[i]=minn;
        }
        int ans=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if((nums[i]-arr[i])>0)
            ans=max(ans,nums[i]-arr[i]);
        }
        if(ans==INT_MIN) return -1;
        else return ans;
    }
};