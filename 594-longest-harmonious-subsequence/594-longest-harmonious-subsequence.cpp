class Solution {
public:
    int findLHS(vector<int>& nums) {
       sort(nums.begin(),nums.end());
         map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int ans=0;
        int x=-1,y=0;
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            if(i->first-x==1)
            {
                ans=max(ans,y+i->second);
            }
            x=i->first;
            y=i->second;
        }
        return ans;
     
    }
};