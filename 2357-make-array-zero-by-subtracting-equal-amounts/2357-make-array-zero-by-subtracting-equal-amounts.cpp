class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        map<int,int>mp;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto i:mp)
        {
            if(i.first!=0) count++;
        }
        return count;
    }
};