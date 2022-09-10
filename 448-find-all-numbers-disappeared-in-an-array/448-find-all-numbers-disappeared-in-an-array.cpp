class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
      int n=nums.size();
       vector<int>v;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        for(int i=1;i<=n;i++)
        {
            if(mp.find(i)==mp.end()) v.push_back(i);
        }
        return v;
    }
};