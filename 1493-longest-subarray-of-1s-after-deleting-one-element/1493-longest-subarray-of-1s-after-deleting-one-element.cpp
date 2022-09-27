class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxx=0,l=0,r=0,cnt=0;
        for(int i=0;i<nums.size();i++)
        { if(nums[i]==0)
          {  cnt++;
           l=r;
            r=0;
           }
         else if(nums[i]==1)
         {r++;
           }
         maxx=max(maxx,r+l);
        }
        if(cnt==0)
         return nums.size()-1;
        
        return maxx; 
    }
};