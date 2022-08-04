class Solution {
public:
    bool divideArray(vector<int>& nums) {
      sort(nums.begin(),nums.end());
        int n=nums.size();
        bool ans=true;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        for(auto i:mp)
        {
            if(i.second%2==1)
                ans=false;
        }
        return ans;
        
    }
};