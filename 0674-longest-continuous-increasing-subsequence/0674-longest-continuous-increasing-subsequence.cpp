class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
       int maxx=0;
    int cnt=1;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]<nums[i+1])cnt++;
            else
            {
                maxx=max(maxx,cnt);
                cnt=1;
            }
            maxx=max(maxx,cnt);
            
        }
        if(cnt==nums.size())return nums.size();
        return maxx;
    }
};