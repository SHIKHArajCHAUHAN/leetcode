class Solution {
public:
    int fn(vector<int>&nums,int k)
    {
        int i=0;
        int j=0;
        int cnt=0;
        map<int,int>mp;
        while(i<nums.size())
        {
            mp[nums[i]]++;
            while(mp.size()>k)
            {
                auto it=mp.find(nums[j]);
                it->second--;
                if(it->second==0) mp.erase(it);
                j++;
            }
            cnt+=(i-j+1);
            i++;
        }
        return cnt;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
       return fn(nums,k)-fn(nums,k-1);
    }
};