class Solution {
public:
    bool fn(vector<int>nums,int &l,int &r)
	{
		sort(nums.begin()+l,nums.begin()+r+1);
		int diff=nums[l+1]-nums[l];
		for(int i=l+1;i<=r;i++)
		{
			if(nums[i]-nums[i-1]!=diff)
				return false;
		}
		return true;
    }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
       vector<bool>v;
        for(int i=0;i<r.size();i++)
        {
			if(fn(nums,l[i],r[i]))
			{
				v.push_back(true);
			}
			else
			{
				v.push_back(false);
			}
		}   
		return v;
    }
};