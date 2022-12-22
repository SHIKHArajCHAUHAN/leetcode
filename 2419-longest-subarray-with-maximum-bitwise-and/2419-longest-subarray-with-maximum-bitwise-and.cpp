class Solution {
public:
    int longestSubarray(vector<int>& nums) {
      int ans=*max_element(nums.begin(),nums.end());
        int cnt=0;
        int maxx=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==ans)
            {
                cnt++;
                
            }
            else
            {
              maxx=max(cnt,maxx);cnt=0;  
            }
             maxx=max(cnt,maxx);
        }
        return maxx;
    }
};