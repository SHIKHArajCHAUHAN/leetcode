class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       vector<int>v(nums.size(),0);
        int n=nums.size();
        int x=0;
        int y=1;
        for(int i=0;i<n;i++)
        {  if(nums[i]>0)
        { v[x]=nums[i]; 
         x+=2;
        }
         else
         {
             v[y]=nums[i];
             y+=2;
         }
        }
        return v;
    }
};