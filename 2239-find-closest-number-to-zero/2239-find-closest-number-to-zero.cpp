class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
       int ans = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(abs(nums[i]) < abs(ans) || abs(ans) == nums[i]){
                ans = nums[i];
            }
        }
        return ans;
    }
};