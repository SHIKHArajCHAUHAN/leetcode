class Solution {
public:
    int minOperations(vector<int>& nums) {
        
        int ans=0;
       /* for(int i=0;i<nums.size();i++)
        {
            v.push_back(nums[i]);
        }*/
      for(int i=0;i<nums.size()-1;i++)
      {
          if(nums[i]>=nums[i+1]){
          int c=nums[i]-nums[i+1];   
         nums[i+1]=nums[i+1]+1+c;
          ans=ans+c+1;}
      }
        return ans;
    }
};