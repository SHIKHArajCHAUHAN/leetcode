class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        if(k==0&&n==1) return false;
        
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {int val=nums[i];
            if(mp.find(nums[i])!=mp.end()&&abs(i-mp[nums[i]])<=k)
                return true;
        mp[nums[i]]=i;}
     /* for(int i=0;i<n;i++)
      {
        for(int j=i+1;j<n;j++)
        {
            if(nums[i]==nums[j]&&abs(i-j)<=k)
                return true;
        }
      }*/
        return false;
    }
};