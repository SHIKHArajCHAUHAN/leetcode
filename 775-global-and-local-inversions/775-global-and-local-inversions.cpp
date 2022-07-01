class Solution {
public:
    bool isIdealPermutation(vector<int>& nums) {
                for(int i=0;i<nums.size();i++)
                {
                    if(abs(nums[i]-i)>1)
                        return false;
                }
        return true;

       
       /* int c1=0;
            int c2=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]>nums[j])
                    c1++;
            }
        }
         for(int i=0;i<nums.size()-1;i++)
         {

            if(nums[i]>nums[i+1])
            {
                c2++;
            }
                 
        }
        if(c1==c2) return true;
        return false;*/
    }
};