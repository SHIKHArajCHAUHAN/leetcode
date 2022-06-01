class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int res=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
           /* if(nums[i]+1!=nums[i+1]){
                return nums[i]+1;
            }
        }return nums[n]+1;*/res^=(i+1)^nums[i];}return res;
            
    }
};