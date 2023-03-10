class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
       
        int ans=nums[0];
            for(int j=1;j<nums.size();j++)
            {
               ans=__gcd(nums[j],ans);
            }
        return ans==1;
    }
};