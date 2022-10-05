class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
      int n=nums.size();
        int k=n/3;
        map<int,int>mp;
        for(int i= 0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        nums.clear();
        for(auto i:mp)
        {
            if(i.second>k) nums.push_back(i.first);
        }
        return nums;
    }
};