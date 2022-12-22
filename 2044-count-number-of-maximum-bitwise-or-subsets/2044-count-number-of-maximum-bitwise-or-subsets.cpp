class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
       int ans=0;
        for(int i=0;i<nums.size();i++)
        {
           ans|=nums[i]; 
        }
         
        int n=nums.size();

      vector<vector<int>>subset;
    
        for(int i=0;i<(1<<n);i++)
        {
                vector<int>v;

            for(int j=0;j<n;j++)
            {
                if(i&(1<<j))
                   v.push_back(nums[j]);
            }
            subset.push_back(v);
        }
        int cnt=0;
        for(int i=0;i<subset.size();i++)
        {
            int orr=0;
          for(int j=0;j<subset[i].size();j++)
          {
             orr|=subset[i][j]; 
          }
            if(orr==ans)cnt++;
        }
        return cnt;
    }
};