class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            string s=nums[i];
            for(int j=0;j<nums.size();j++)
            {
               s+=nums[j];
                if(s==target&&i!=j)
                {cnt++;
                }
                 s=nums[i];  
            }
        }
        return cnt;
    }
};