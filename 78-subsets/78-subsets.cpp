class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
                int n=nums.size();

      vector<vector<int>>subset;
    
        for(int i=0;i<(1<<n);i++)
        {
                vector<int>v;

            for(int j=0;j<n;j++)
            {
                if(i&(1<<j))
                   v.push_back(nums[j]);
            }
            subset.push_back(v);
        }
        return subset;
    }
};