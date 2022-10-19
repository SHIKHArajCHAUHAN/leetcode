class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        map<int,int>mp;
        
      for(int i=0;i<nums.size();i++)
      {
          mp[nums[i]]++;
      }
        int cnt=0;
        int cnt1=0;
        for(auto i:mp)
        {
            if(i.second%2!=0)
            {
              cnt+=i.second/2;
                cnt1++;
                
            }
            else
            {
              cnt+=i.second/2;  
            }
        }
        return {cnt,cnt1};
    }
};