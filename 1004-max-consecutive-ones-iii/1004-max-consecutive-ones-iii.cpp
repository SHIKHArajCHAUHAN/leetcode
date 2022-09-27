class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
      int n=nums.size();
        int  i=0,j=0,maxx=0,cnt=0;
        while(j<n)
        {
            if(nums[j]==0)
            {
                cnt++;
            }
            if(cnt<=k)
            {
                maxx=max(maxx,j-i+1);
                j++;
            }
            else if(cnt>k)
            {
                while(cnt>k)
                {
                    if(nums[i]==0)
                    cnt--;
                    i++;
                }
            j++;
            }  
        }
        return maxx;
    }
};