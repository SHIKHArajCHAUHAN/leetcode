class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
   /*   sort(nums.begin(),nums.end());
    int n=nums.size();
        for(int i=0;i<nums.size()-1;i++)
        {
            if(i==0)
            {
                if(nums[i]!=nums[i+1])
                    return nums[i];
            }
          if(nums[i-1]<nums[i]&&nums[i]<nums[i+1])
            {
                return nums[i];
            }
        }
    return nums[n-1];*/
        int res=0;
           for(int i=0;i<nums.size();i++)
           {
               res^=nums[i];
           }
       return res;
    }
};