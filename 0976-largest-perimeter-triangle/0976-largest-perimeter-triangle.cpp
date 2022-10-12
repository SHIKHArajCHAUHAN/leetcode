class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
    int n=nums.size(),sum=0;
		sort(nums.begin(),nums.end());
		for(int i=n-3;i>=0;i--)  {
			if(nums[i]+nums[i+1]>nums[i+2]) {
				return nums[i]+nums[i+1]+nums[i+2];
			}
		}
		return sum;
    }
};