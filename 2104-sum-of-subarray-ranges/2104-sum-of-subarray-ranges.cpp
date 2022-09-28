class Solution {// next time i will do it by stack 
public:
    long long subArrayRanges(vector<int>& nums) {
       int n=nums.size();
        int k=1;
        int j=1;
         long long ans=0;
        for(int i=0;i<nums.size();i++)
        {
            int minn,maxx;
            minn=maxx=nums[i];
            for(int j=i;j<nums.size();j++)
            {
                minn=min(minn,nums[j]);
                maxx=max(maxx,nums[j]);
                ans=ans+maxx-minn;
            }
        }
        return ans;
    }
};