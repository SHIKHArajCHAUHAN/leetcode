class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
       sort(nums.begin(),nums.end(),greater<int>());
        int sum=0;
        int sum2=0;
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
          sum+=nums[i];  
        }
        for(int i=0;i<nums.size();i++)
        {
            sum-=nums[i];
            sum2+=nums[i];
            
                v.push_back(nums[i]);
            if(sum2>sum)break;
            
                
        }
        return v;
    }
};