class Solution {
public:
    int reductionOperations(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        int cnt=0;//basicaly sbko hme minn p le k aana hai 
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[i-1])
            cnt+=nums.size()-i;
        }
        return cnt;  
    }
};