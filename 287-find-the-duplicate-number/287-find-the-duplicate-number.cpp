class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
            //for(int j=i+1;j<n;j++)
            if(nums[i]==nums[i+1])
                return nums[i];
        }return 0;
    }
};