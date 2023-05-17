class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n=nums.size(),j=0,i=0;
        int ans=0,sum=0;
        map<int,int>mp;
        while(j<n)
        {
            sum+=nums[j];
            mp[nums[j]]++;
            while(mp[nums[j]]>1)
            {
                mp[nums[i]]--;
                sum-=nums[i];
                i++;
            }
            ans=max(ans,sum);
            j++;
        }
        return ans;
    }
};