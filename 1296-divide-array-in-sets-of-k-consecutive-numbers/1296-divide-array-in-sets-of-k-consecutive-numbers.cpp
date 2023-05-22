class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
      unordered_map<int,int>mp;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(mp[nums[i]]==0) continue;
            int start=nums[i];
            int cnt=1;
            while(cnt<=k)
            {
                if(mp[start]==0) return false;
                mp[start]--;
                start++;
                cnt++;
            }
        }
        return true;
    }
};