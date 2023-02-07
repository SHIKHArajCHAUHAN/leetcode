class Solution {
public:
    int countElements(vector<int>& nums) {
      sort(nums.begin(),nums.end());
        int cnt=0;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        nums.clear();
        for(auto i:mp)
        {
            nums.push_back(i.first);
        }
        for(int i=1;i<nums.size()-1;i++)
        {
           if(nums[i]>nums[i-1]&&nums[i]<nums[i+1])cnt+=mp[nums[i]]; 
        }
        return cnt;
    }
};