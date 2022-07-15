class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int j=-1;//not available now
        for(int i=0;i<nums.size();i++)
        { if(nums[i]%2==0)
        {  j++;
           swap(nums[j],nums[i]);
            
        } 
        }
        return nums;
    }
};