class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
       map<int,int>mp;
        for(auto i:nums)
        {
            mp[i]++;
        }
        nums.clear();
        for(auto i:mp)
        {
          if(i.second==1&&mp.find(i.first+1)==mp.end()&&mp.find(i.first-1)==mp.end())
              nums.push_back(i.first);
        }
        return nums;
    }
};