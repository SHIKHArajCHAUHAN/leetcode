class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
//        vector<int>ans;
        
//         for(int i=0;i<nums.size();i++)
//         {
//             int sum=0;
//             for(int j=0;j<nums.size();j++)
//                sum+= abs(nums[i]-nums[j]);
                
//             ans.push_back(sum);
            
//         }
//         return ans;
          int n = nums.size(), total = accumulate(nums.begin(), nums.end(), 0);
        vector<int> ans(n);
        int currSum = 0;
        for(int i = 0; i < n; i++) {
            ans[i] = (total - currSum) - nums[i] * (n - i) + nums[i] * i - currSum;
            currSum += nums[i];//prefix sum
        }
        return ans;
    }
};