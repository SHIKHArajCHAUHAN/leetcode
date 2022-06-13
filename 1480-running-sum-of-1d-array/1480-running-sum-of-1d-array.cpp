class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int a=0;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            a+=nums[i];
            ans.push_back(a);
        }
        return ans;
        
    }
};