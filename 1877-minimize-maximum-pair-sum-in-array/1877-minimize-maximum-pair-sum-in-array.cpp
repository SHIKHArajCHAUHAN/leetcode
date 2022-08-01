class Solution {
public:
    int minPairSum(vector<int>& nums) {
      sort(nums.begin(),nums.end());
        pair<int,int>p;
        int sum=0;
        int n=nums.size();
        for(int i=0;i<=n/2;i++)
        {
            p=make_pair(nums[i],nums[n-i-1]);
            int x=nums[i]+nums[n-i-1];
            sum=max(x,sum);
        }
        return sum;
    }
};