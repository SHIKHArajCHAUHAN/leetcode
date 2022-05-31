class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
                    nums.push_back(target);
                    sort(nums.begin(),nums.end());
                    for(int j=0;j<nums.size();j++){
                        if(nums[j]==target)
                            return j;
                        else if(nums[j]>target)
                            return j;
                    }return nums.size();
                    
    }   
    
};