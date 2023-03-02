class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
       vector<int>v;
        for(int i=0;i<nums.size()-1;i+=2)
        {
            int j=nums[i];
            while(j--)
            {
              v.push_back(nums[i+1]);  
            }
        }
        return v;
    }
};