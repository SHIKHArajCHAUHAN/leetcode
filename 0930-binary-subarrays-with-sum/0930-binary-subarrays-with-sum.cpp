class Solution {
public:
    int fn(vector<int>&nums,int goal)
    {
        int cnt=0;
        int i=0,j=0;
        int sum=0;
        int n=nums.size();
        if(goal<0) return 0;
        while(j<n)
        {
            sum+=nums[j];
           
            while(sum>goal)
                {
                    sum-=nums[i];
                    i++;
                }
             cnt+=j-i+1;j++;
        }
        return cnt;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
       return fn(nums,goal)-fn(nums,goal-1);
        
    }
};