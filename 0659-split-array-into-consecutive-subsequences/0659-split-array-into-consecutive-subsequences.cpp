class Solution {
public:
    bool isPossible(vector<int>& nums) {
     unordered_map<int,int>mp,mp2;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto i:nums)
        {
            if(mp[i]==0) continue;
            mp[i]--;
            if(mp2[i-1]>0)
            {
                mp2[i-1]--;
                mp2[i]++;
            }
            else if(mp[i+1]!=0&&mp[i+2]!=0)
            {
                mp[i+1]--;
                mp[i+2]--;
                mp2[i+2]++;
            }
            else return false;
        }
        return true;
    }
};