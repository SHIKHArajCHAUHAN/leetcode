class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
         int i,n=nums.size(),start=0,ans=0;
        map<int,int>mp;///stores data in asc order
        for(i=0;i<n;i++){
            mp[nums[i]]++;
            while(mp.rbegin()->first-mp.begin()->first>limit){
                mp[nums[start]]--;
                if(mp[nums[start]]==0) mp.erase(nums[start]);
                start++;
            }
            ans=max(ans,i-start+1);
        }
        return ans; 
    }
};