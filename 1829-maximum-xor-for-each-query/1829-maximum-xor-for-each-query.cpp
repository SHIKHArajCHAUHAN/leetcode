class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
      int x=pow(2,maximumBit)-1;
        int n=nums.size();
        vector<int>v;
        int prefix=0;
        for(int i=0;i<n;i++)
        {
           prefix=prefix^nums[i]; 
        }
        for(int i=n-1;i>=0;i--)
        {int xx=prefix^x;
            v.push_back(xx);
            prefix=prefix^nums[i];
        }
        return v;
    }
};