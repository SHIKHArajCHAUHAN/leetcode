class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        /*vector<bool>v;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0) v.push_back(true);
            else v.push_back(false);
        }
        return v;*/
        int n = nums.size();
        vector<bool>v(n, false);
        int prev = 0;
        for (int i = 0; i < n; i++)
        {
            prev = ((prev << 1) + nums[i]) % 5;
            v[i] = prev == 0; 
        }

        return v;
    }
};