class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int n=nums.size();
       sort(nums.begin(),nums.end());
        // nums[0]=nums[n/2-1];
        // nums[n-1]=nums[n/2];
        //  sort(nums.begin(),nums.end());
        // return nums[n-1]-nums[0];
         int ans=abs(nums[1]-nums[n-2]);
        ans=min(ans,abs(nums[0]-nums[n-3]));
        ans=min(ans,abs(nums[2]-nums[n-1]));
        return ans;
    }
};